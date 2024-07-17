class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>result(queries.size(),0);
        sort(nums.begin() ,nums.end());
        int s,count;

        for(int i=0;i<queries.size();i++)
        {x
            s=0;
            count=0;
          for(auto num:nums)
          {
            if(s+num> queries[i])
            {
                break;
            }
            s+=num;
            count++;
          }
          result[i]=count;
        }
        return result;
    }
};