class Solution {
public:
    int dfs(int R,int C,int r,int c,vector<vector<int>>&grid,vector<vector<int>>&visited,int &count){
        visited[r][c]=1;
        int dr[4]={1,-1,0,0};
        int dc[4]={0,0,1,-1};
        for(int i=0;i<4;i++){
            int adjr=r+dr[i];
            int adjc=c+dc[i];
            if(adjr>=0 && adjr<R && adjc>=0 && adjc<C && grid[adjr][adjc]==1 && visited[adjr][adjc]!=1){
                count++;
                dfs(R,C,adjr,adjc,grid,visited,count);
            }
        }
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        int maxc=0;
        vector<vector<int>>visited(R,vector<int>(C,0));
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(grid[r][c]==1 && visited[r][c]!=1){
                    int count=1;
                    maxc=max(maxc,dfs(R,C,r,c,grid,visited,count));
                }
            }
        }
        return maxc;
    }
};