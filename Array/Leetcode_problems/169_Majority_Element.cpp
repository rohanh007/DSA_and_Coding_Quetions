// Solution !:

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto it: mp){
            if(it.second>n/2){
                return it.first;
            }
        }
        return -1;
    }
};


// Solution 2 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>map ;
        for(auto i:nums)
        {
            map[i]++;
        }
       
       int max=INT_MIN ;
       int majorityelement=0;
       for(auto j:map)
       { 
         if(j.second>max)
         {
            max=j.second ;
            majorityelement=j.first;
         }

       }
       return majorityelement ;
    }
};