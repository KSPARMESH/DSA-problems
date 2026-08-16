class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int index=-1,min_dist=INT_MAX;
        for(int i=0;i<drones.size();i++){
            int dist=abs(drones[i][0]-target[0]) + abs(drones[i][1]-target[1]);
            if(dist<=drones[i][2] && dist<min_dist){
                min_dist=dist;
                index=i;
            }
        }
        return index;
    }
};