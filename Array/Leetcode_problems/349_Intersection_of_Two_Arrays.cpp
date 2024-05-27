class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans ;
        unordered_map<int ,int>num1 ;
        unordered_map<int ,int> num2 ;

        for(auto i:nums1)
        {
            num1[i]++;
        }
        for(auto j:nums2)
        {
            num2[j]++ ;
        }
        for(auto z:num1)
        {
            for(auto x:num2)
            {
                if(z.first==x.first)
                {
                    ans.push_back(z.first);
                }
            }
        }

         return ans ;
    }
};