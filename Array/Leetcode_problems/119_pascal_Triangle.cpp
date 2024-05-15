// Solution :

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> rows(rowIndex + 1);

        for(int i = 0; i <= rowIndex; i++) {
            rows[i].resize(i + 1);
            for(int j = 0; j <= i; j++) {
                if (j == 0 || j == i)
                    rows[i][j] = 1;
                else
                    rows[i][j] = rows[i - 1][j] + rows[i - 1][j - 1];
            }
        }
        return rows[rowIndex];
    }
};

// Runtime
// 3
// ms
// Beats
// 39.61%
// of users with C++
// Memory
// 7.73
// MB
