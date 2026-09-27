class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        while(nums.size()!=0){
            set<int>st;
            for(int num:nums){
                st.insert(num);
            }
            for(int ele:st){
                auto it=find(nums.begin(),nums.end(),ele);
                if(it!=nums.end()){
                    nums.erase(it);
                }
            }
            for(int ele:st){
                ans.push_back(ele);
            }
        }
        return ans;
    }
};