// Solution 1 :

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0 ;i<n ;i++)
        {
            if(nums[i]==target || target<nums[i])
            {
                return i ;
            }
        }
        return nums.size();
    }
};


// Runtime
// 8
// ms
// Beats
// 6.92%
// of users with C++
// Memory
// 12.12
// MB
// Beats
// 7.54%
// of users with C++

// Solution 2:

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        while (left < right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target)
            {
                return mid;
            }
            if(nums[mid] < target)
            {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return right;
    }
};