// Solution 1 :

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        int mini =INT_MAX;

        for (auto num : nums2) {
            if (set1.count(num)) {
                int temp=-1;

                mini = min(mini, num);
            }
        }

        int val=(mini==2147483647)? -1:mini ;
        return val ; 
    }

    
};


// Solution 2 :

class Solution {
public:
   int getCommon(vector<int>& nums1, vector<int>& nums2) {
       int n=nums1.size() ;
       int m=nums2.size();
       int i=0;
       int j=0;

       while(i<n && j<m)
       {
              if(nums1[i]==nums2[j]){
                return nums1[i];
              }else if(nums1[i]<nums2[j])
              {
                 i++;
              }else
              {
                j++;
              }
       }
       return -1;
    }

    
};


