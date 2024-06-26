class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int i = 0, j = 0, len = INT_MAX, sum = 0;
        while(j < nums.size()){
            sum += nums[j++];
            while(sum >= s){
                len = min(len, j - i);
                sum -= nums[i++];
            }
        }
        return len == INT_MAX ? 0 : len;
    }
};