class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime){
        int max_green=*max_element(lights.begin(),lights.end());
        int ans=0;
        for(int j=0;j<arrivalTime.size();j++){
            int r=arrivalTime[j]%period;
            if(r>=max_green){
                ans=max(ans,period-r);
            }
        }
        return ans;
    }
};