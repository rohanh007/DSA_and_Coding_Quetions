// Solution :

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last = digits.size() - 1;

        if (digits[last] == 9) {
            digits[last] = 0;
            for (int i = last - 1; i >= 0; --i) {
                if (digits[i] != 9) {
                    digits[i] += 1;
                    break;
                } else {
                    digits[i] = 0;
                }
            }
            if (digits[0] == 0) {
                digits.insert(digits.begin(), 1);
            }
        } else {
            digits[last] += 1;
        }

        return digits;
    }
};

// Runtime
// 4
// ms
// Beats
// 28.71%
// of users with C++
// Memory
// 10.32
// MB
// Beats
// 14.63%
// of users with C++