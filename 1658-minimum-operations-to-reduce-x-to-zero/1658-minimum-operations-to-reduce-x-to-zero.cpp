class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total=0;
        for(int num:nums){
            total+=num;
        }
        int target=total-x;
        int sum=0;
        int left=0;
        int maxLen=-1;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(left<=right && sum>target){
                sum-=nums[left];
                left++;
            }
            if(sum==target){
                maxLen=max(maxLen,right-left+1);
            }
        }
        if(maxLen==-1){
            return -1;
        }
        return nums.size()-maxLen;
    }
};