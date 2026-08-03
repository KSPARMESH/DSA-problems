class Solution {
public:
    void dfs(int R,int C,int r,int c,vector<vector<char>>&grid,vector<vector<int>>&visited){
        if(visited[r][c]==1){
            return;
        }
        visited[r][c]=1;
        int dr[4]={1,-1,0,0};
        int dc[4]={0,0,1,-1};
        for(int i=0;i<4;i++){
            int adjr=r+dr[i];
            int adjc=c+dc[i];
            if(adjr>=0 && adjr<R && adjc>=0 && adjc<C && grid[adjr][adjc]=='1'){
                dfs(R,C,adjr,adjc,grid,visited);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        int count=0;
        vector<vector<int>>visited(R,vector<int>(C,0));
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(grid[r][c]=='1' && visited[r][c]!=1){
                    count++;
                    dfs(R,C,r,c,grid,visited);
                }
            }
        }
        return count;
    }
};