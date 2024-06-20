class Solution {
private:
    int firstocc(vector<int>&nums, int target)
    {
        int ans=-1;
        int low=0;
        int high=nums.size()-1;

        while(low<=high)
        {
            int mid=low+(high-low)/2 ;
            if(nums[mid]==target)
            {
                ans=mid;
                high=mid-1;
            }else if(nums[mid]>target)
            {
                high=mid-1;
            }else
            {
                low=mid+1;
            }
        }
        return ans;
    }
     int lastocc(vector<int>&nums, int target)
    {
        int ans=-1;
        int low=0;
        int high=nums.size()-1;

        while(low<=high)
        {
            int mid=low+(high-low)/2 ;
            if(nums[mid]==target)
            {
                ans=mid;
                low=mid+1;
            }else if(nums[mid]>target)
            {
                high=mid-1;
            }else
            {
                low=mid+1;
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans ;

        ans.push_back(firstocc(nums,target));
        ans.push_back(lastocc(nums,target));


        return ans ;
    }
};

