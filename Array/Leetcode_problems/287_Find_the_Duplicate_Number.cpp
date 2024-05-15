// Solution :
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      unordered_map<int,int>unique ;

      for(auto i:nums)
      {
        unique[i]++;
      }  
      for(auto j:unique)
      {
        if(j.second>=2)
        {
            return j.first ; 
        }
      }
      return 0;
    }
};


// Runtime
// 179
// ms
// Beats
// 9.54%
// of users with C++
// Memory
// 104.11
// MB
// Beats
// 8.28%
// of users with C++