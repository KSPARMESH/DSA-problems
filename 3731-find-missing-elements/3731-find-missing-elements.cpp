class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int minv=nums[0],maxv=nums[n-1];
        for(int i=minv;i<=maxv;i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};