// Solution 1 :
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0 ;
        int j=s.size()-1;

        while(i<j)
        {
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp ;
            i++;
            j--;
        }
    }
};


// Solution 2 :


class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0 ;
        int j=s.size()-1;

        while(i<j)
        {
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp ;
            i++;
            j--;
        }
    }
};