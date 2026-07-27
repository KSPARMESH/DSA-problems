class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxv=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    maxv=max(maxv,((nums[i]-1)*(nums[j]-1)));
                }
            }
        }
        return maxv;
    }
};