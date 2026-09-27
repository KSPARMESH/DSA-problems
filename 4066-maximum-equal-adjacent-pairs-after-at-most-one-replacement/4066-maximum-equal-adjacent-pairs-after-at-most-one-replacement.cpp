class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int initialPairs=0;
        map<pair<int,int>,int>pairs;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                initialPairs++;
            }
        }
        for(int i=0;i<nums.size()-1;i++){
            int x=nums[i],y=nums[i+1];
            if(x!=y){
                pairs[{min(x,y),max(x,y)}]++;
            }
        }
        int maxPairs=0;
        for(auto it:pairs){
            maxPairs=max(maxPairs,it.second);
        }
        return initialPairs+maxPairs;
    }
};