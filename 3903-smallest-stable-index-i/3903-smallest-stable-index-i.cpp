class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int index=INT_MAX,flg=0;
        for(int i=0;i<nums.size();i++){
            int instability_score=0;
            int maxv=INT_MIN,minv=INT_MAX;
            for(int j=0;j<=i;j++){
                maxv=max(maxv,nums[j]);
            }
            for(int j=i;j<nums.size();j++){
                minv=min(minv,nums[j]);
            }
            instability_score=maxv-minv;
            if(instability_score<=k){
                flg=1;
                index=min(index,i);
            }
        }
        if(flg){
            return index;
        }
        return -1;
    }
};