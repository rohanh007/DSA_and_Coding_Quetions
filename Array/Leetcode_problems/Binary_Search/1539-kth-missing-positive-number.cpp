class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0 ;
        int j=1;
        int result=0;
        while(i<arr.size() && k!=0)
        {
            if(arr[i]!=j)
            {
                result=j;
                j++;
                k--;
            }else
            {
                j++;
                i++;
            }
        }
        if(k!=0)
        {
            return j+k-1;
        }
        return result ;
    }
};