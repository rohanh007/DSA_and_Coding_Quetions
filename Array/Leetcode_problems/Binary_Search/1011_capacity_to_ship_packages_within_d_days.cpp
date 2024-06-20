class Solution {
private: 
      bool ispossible(vector<int>&weights,int days, int mid)
      {
           int n=weights.size();
           int daycount=1;
           int weightsum=0;

           for(int i=0;i<n;i++)
           {
            if(weightsum+weights[i]<=mid)
            {
                weightsum+=weights[i];
            }else
            {
                daycount++;
                if(daycount>days || weights[i]>mid)
                {
                    return false ;
                }
                weightsum=weights[i];
            }
            if(daycount>days)
            {
                return false ;
            }
           }
         return true ;

      }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s=0;
        int e=0;
        for(auto x:weights)
        {
            e=e+x ;
        } 
        int ans=-1;

        while(s<=e)
        {
            int mid=s+(e-s)/2 ;
            if(ispossible(weights,days,mid))
            {
                ans=mid;
                e=mid-1;
            }else
            {
                s=mid+1;
            }
        }
        return ans;
    }
};