class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>values;

       for(auto i:nums)
       {
        values[i]++;
       } 
       for(auto j:values)
       {
        if(j.second==1)
        {
            return j.first;
        }
       }
       return nums[0];
    }
};