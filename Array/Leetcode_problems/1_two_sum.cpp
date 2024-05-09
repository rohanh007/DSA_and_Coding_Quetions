// Solution 1 :   (Brute Force)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans ;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1 ;j<nums.size() ;j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
      return ans ;  
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(1)


//Solution 2 : (One-pass Hash Table)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>numindex ;

        for(int i=0;i<nums.size();i++)
        {
            int complement=target-nums[i];
            if(numindex.count(complement))
            {
                return {numindex[complement],i};
            }

            numindex[nums[i]]=i ;
        } 
        return {}; 
    }
};



