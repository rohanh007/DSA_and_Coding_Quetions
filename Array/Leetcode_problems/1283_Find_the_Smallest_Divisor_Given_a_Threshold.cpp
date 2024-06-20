class Solution {
    private:
        int getthresholdValue(vector<int>& nums, long long mid) {
            int value = 0;
            for(auto t: nums) {
                value += ceil((double)t / mid);  
            }
            return value;
        }
    public:
        int smallestDivisor(vector<int>& nums, int threshold) {
            long long s = 1;  
            long long sum = 0;
            long long ans = 0;
            for(auto t: nums) {
                sum += t;
            }
            long long e = sum;

            while(s <= e) {
                long long mid = s + (e - s) / 2;

                long long checkthreshold = getthresholdValue(nums, mid);

                if(checkthreshold <= threshold) {
                    ans = mid;
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            }
            return ans;
        }
};