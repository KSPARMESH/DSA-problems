class Solution {
public:
    void dfs(int r,int c,int R,int C,vector<vector<char>> &board){
        board[r][c]='#';
        int dr[4]={1,-1,0,0};
        int dc[4]={0,0,1,-1};
        for(int i=0;i<4;i++){
            int adjr=r+dr[i];
            int adjc=c+dc[i];
            if(adjr>=0 && adjr<R && adjc>=0 && adjc<C && board[adjr][adjc]=='O'){
                dfs(adjr,adjc,R,C,board);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int R=board.size(),C=board[0].size();
        for(int r=0;r<R;r++){
            if(board[r][0]=='O'){
                dfs(r,0,R,C,board);
            }
            if(board[r][C-1]=='O'){
                dfs(r,C-1,R,C,board);
            }
        }
        for(int c=0;c<C;c++){
            if(board[0][c]=='O'){
                dfs(0,c,R,C,board);
            }
            if(board[R-1][c]=='O'){
                dfs(R-1,c,R,C,board);
            }
        }
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(board[r][c]=='O'){
                    board[r][c]='X';
                }
                else if(board[r][c]=='#'){
                    board[r][c]='O';
                }
            }
        }
    }
};