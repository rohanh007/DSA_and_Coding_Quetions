// Solution 1 ::
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int s=0;
        int pos=0;
        int neg=0;


        while(s<nums.size())
        {
            if(nums[s]==0)
            {
                s++;
            }else if(nums[s]>0)
            {
                pos++;
                s++;
            }else
            {
                neg++;
                s++;
            }
            
        }
        return max(pos,neg);
    }
};


// solution 2::
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;

        int negativeCount = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < 0) {
                negativeCount = mid + 1;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        
        low = 0;
        high = n - 1;
        int positiveCount = 0;

    
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > 0) {
                positiveCount = n - mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return max(negativeCount, positiveCount);
    }
};