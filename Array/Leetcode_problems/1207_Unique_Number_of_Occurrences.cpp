// Solution 1 :

class Solution {
public:
bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> count;
        for(int n : arr)
        {
            count[n]++;
        }
        unordered_set<int> ans;
        for(auto i : count)
        {
            ans.insert(i.second);
        }
        if(ans.size() == count.size())
        {
            return true;
        }
        else
        return false;
    }
};

// Time Complexity O(n) 
//  Space Complexity O(n)


// Solution 2 :

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        
        sort(arr.begin(),arr.end());
        int i=0;
        while(i<arr.size())
        {
            int count=1;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            ans.push_back(count);
            i=i+count;
        }
        
        sort(ans.begin(),ans.end());
        int s=ans.size();
        
        for(int i=0;i<s-1;i++)
        {
            if(ans[i]==ans[i+1])
            {
                return false;
            }
            
        }
        return true;
        }
};

// Time complexity O(nlog n)
// Space complexity O(n)

