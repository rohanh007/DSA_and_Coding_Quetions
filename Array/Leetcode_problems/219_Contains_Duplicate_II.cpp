
// Solution : 
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j <= i + k && j < nums.size(); j++)
            {
                if(nums[i]==nums[j] && (abs(i-j)<=k))
                {
                     return true ;
                }
            }
        }
        return false ;
    }
};