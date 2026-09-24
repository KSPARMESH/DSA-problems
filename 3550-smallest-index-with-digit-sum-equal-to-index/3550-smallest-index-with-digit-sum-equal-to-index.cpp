class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int num=nums[i],sumDigit=0;
            while(num!=0){
                sumDigit+=(num%10);
                num/=10;
            }
            if(sumDigit==i){
                return i;
            }
        }
        return -1;
    }
};