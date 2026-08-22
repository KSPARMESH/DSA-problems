class Solution {
public:
    void dfs(int r,int c,int R,int C,vector<vector<int>> &grid,vector<vector<bool>> &visited,bool &isClosed){
        visited[r][c]=1;
        if(r==0 || r==R-1 || c==0 || c==C-1){
            isClosed=0;
        }
        int dr[4]={1,-1,0,0};
        int dc[4]={0,0,1,-1};
        for(int i=0;i<4;i++){
            int adjr=r+dr[i];
            int adjc=c+dc[i];
            if(adjr>=0 && adjr<R && adjc>=0 && adjc<C && grid[adjr][adjc]==0 && visited[adjr][adjc]!=1){
                dfs(adjr,adjc,R,C,grid,visited,isClosed);
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        int count=0;
        vector<vector<bool>>visited(R,vector<bool>(C,0));
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(grid[r][c]==0 && visited[r][c]!=1){
                    bool isClosed=1;
                    dfs(r,c,R,C,grid,visited,isClosed);
                    if(isClosed){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};