class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount=INT_MIN ;
        int count=0;
        for(auto num:nums)
        {
            if(num==1)
            {
                count++;
            }else
            {
               
                count=0;
            }
            maxcount=max(maxcount ,count);
        }
        return maxcount;
    }
};