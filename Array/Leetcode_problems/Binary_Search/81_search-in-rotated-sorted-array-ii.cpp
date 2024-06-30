// solution :

class Solution {
public:
    bool search(vector<int>& nums, int target) {

        map<int,bool> ma;
        int len=nums.size();

        for(int i=0;i<len;i++){
            ma[nums[i]]=true;
        }
        return ma[target];
    }
};


// solution seocnd  : using pivot ;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int temp = nums[0];
        if (target == temp) return true;
        else if (target > temp)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] < temp) return false;
                if (target == nums[i]) return true;
            }
        }
        else
        {
            for (int i = nums.size()-1; i >= 0; i--)
            {
                if (nums[i] > temp) return false;
                if (target == nums[i]) return true;
            }
        }
        return false;
    }
};