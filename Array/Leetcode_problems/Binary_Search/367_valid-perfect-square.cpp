class Solution {
public:
    bool isPerfectSquare(int num) {
        long long s=1;
        long long e=num;
        while(s<=e)
        {
            long long mid=s+(e-s)/2 ;

            if(mid*mid ==num)
            {
                return  true;
            }else if(mid*mid<num)
            {
                s=mid+1;
            }else
            {
                e=mid-1;
            }
        }
        return false;
    }
};