class Solution {
public:
    void dfs(int sr,int sc,int R,int C,vector<vector<int>> &image,int color,int orgColor){
        image[sr][sc]=color;
        int dr[4]={1,-1,0,0};
        int dc[4]={0,0,1,-1};
        for(int i=0;i<4;i++){
            int adjr=sr+dr[i];
            int adjc=sc+dc[i];
            if(adjr>=0 && adjr<R && adjc>=0 && adjc<C && image[adjr][adjc]==orgColor){
                dfs(adjr,adjc,R,C,image,color,orgColor);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int R=image.size();
        int C=image[0].size();
        int orgColor=image[sr][sc];
        if(image[sr][sc]!=color){
            dfs(sr,sc,R,C,image,color,orgColor);
        }
        return image;
    }
};