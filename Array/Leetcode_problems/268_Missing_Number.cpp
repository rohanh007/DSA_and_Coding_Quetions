// solution  1 :

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        for( i=0;i<nums.size();i++)
        {
            if(i!=nums[i])
            {
                return i ;
            }
        }
        return i;
    }
};

// Solution 2 :

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len=nums.size();
        int result=-1;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<len;i++){
            if(nums[i]!=i)
            {
                result=i;
                break;
            }
        }
        return result==-1 ? nums.size():result;
    }
};