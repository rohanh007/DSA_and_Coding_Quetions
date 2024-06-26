class Solution {
public:
    int specialArray(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size();

    while (left <= right) {
        int mid = (left + right) / 2;
        int count = 0;

        for (int num : nums) {
            if (num >= mid) {
                count++;
            }
        }

        if (count == mid) {
            return mid;
        } else if (count > mid) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
    }
};