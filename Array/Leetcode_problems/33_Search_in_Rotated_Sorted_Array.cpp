class Solution {
private:
   int binarysearch(vector<int>&nums ,int pivot, int n, int target )
   {  
       while(pivot<=n)
       {
        int mid=pivot+(n-pivot)/2;
        if(nums[mid]==target)
        {
            return mid;
        }else if(nums[mid]>target)
        {
            n=mid-1;
        }else
        {
            pivot=mid+1;
        }
       }
       return -1;
   } 
   int pivotvalue(vector<int>&nums)
   {
      int s=0;
      int e=nums.size()-1;
      while(s<e)
      {
        int mid=s+(e-s)/2;

        if(nums[mid]>=nums[0])
        {
            s=mid+1;
        }else{
            e=mid;
        }
      }
      return s;
   }
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        int pivotindex=pivotvalue(nums);

        if(nums[pivotindex]<= target && target <=nums[e])
        {
             return binarysearch(nums, pivotindex, e, target );
        }else
        {
             return binarysearch(nums, s, pivotindex-1, target);
        }
    return 0;   
    }
};