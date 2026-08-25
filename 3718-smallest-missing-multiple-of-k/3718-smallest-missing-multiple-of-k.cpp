class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int flg=1,i=1;
        while(flg){
            int val=k*i;
            auto it=find(nums.begin(),nums.end(),val);
            if(it==nums.end()){
                return val;
            }
            i++;
        }
        return k;
    }
};