class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row=grid.size() ,  col=grid[0].size() , cnt=0 ,c=0 ,g=row-1 ;

        while(g>=0 && c<col)
        {
            if(grid[g][c]<0)
            {
                --g ;
                cnt+=col-c;
            }else
            {
                ++c;
            }
        }
        return cnt ;
    }
};