class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int pos=0,time=0;
        for(int i=0;i<requests.size();i++){
            time+=abs(requests[i]-pos);
            pos=requests[i];
        }
        return time;
    }
};