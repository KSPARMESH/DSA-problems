class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>prefix_max(n,INT_MAX);
        vector<int>suffix_min(n,INT_MIN);
        prefix_max[0]=nums[0];
        suffix_min[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            prefix_max[i]=max(prefix_max[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;i--){
            suffix_min[i]=min(suffix_min[i+1],nums[i]);
        }
        vector<int>instability_score(n);
        int ans=INT_MAX,flg=0;
        for(int i=0;i<n;i++){
            instability_score[i]=prefix_max[i]-suffix_min[i];
            if(instability_score[i]<=k){
                flg=1;
                ans=min(ans,i);
            }
        }
        if(flg){
            return ans;
        }
        return -1;
    }
};