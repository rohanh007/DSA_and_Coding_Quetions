// Solution 1 :

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans ;

        for(int i=0;i<numRows ;i++)
        {
            vector<int>pascal(i+1 ,1);

            for(int j=1;j<i ;j++)
            {
                pascal[j]=ans[i-1][j]+ans[i-1][j-1];
            }
            ans.push_back(pascal);
        }
        return ans;
    }
};


// Runtime
// 4
// ms
// Beats
// 34.71%
// of users with C++
// Memory
// 7.66
// MB
// Beats
// 99.77%
// of users with C++


// Solution 2: 

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows) ;
         
         for(int i=0;i<numRows ;i++)
         {
            for(int j=0;j<i+1; j++)
            {
                if(j==0 || j==i)
                {
                    ans[i].push_back(1);
                }else
                {
                    ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
                }
            }
         }
        return ans;
    }
};


// Runtime
// 0
// ms
// Beats
// 100.00%
// of users with C++
// Memory
// 7.97
// MB
// Beats
// 46.26%
// of users with C++