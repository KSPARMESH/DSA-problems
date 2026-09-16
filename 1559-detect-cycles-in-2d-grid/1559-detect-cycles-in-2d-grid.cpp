class Solution {
public:
    int diff[5]={0,-1,0,1,0};
    bool dfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int row,int col,int R,int C,int prevrow,int prevcol){
        vis[row][col]=1;
        char ch=grid[row][col];
        for(int i=0;i<4;i++){
            int adjr=row+diff[i];
            int adjc=col+diff[i+1];
            if(adjr>=0 && adjr<R && adjc>=0 && adjc<C && grid[adjr][adjc]==ch){
                if(!vis[adjr][adjc]){
                    if(dfs(grid,vis,adjr,adjc,R,C,row,col)) return true;
                }else{
                    if(adjr!=prevrow && adjc!=prevcol) return true;
                }
            }
        }
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        vector<vector<int>>vis(R,vector<int>(C,0));
        for(int row=0;row<R;row++){
            for(int col=0;col<C;col++){
                if(!vis[row][col]){
                    if(dfs(grid,vis,row,col,R,C,-1,-1)) return true;
                }
            }
        }
        return false;
    }
};