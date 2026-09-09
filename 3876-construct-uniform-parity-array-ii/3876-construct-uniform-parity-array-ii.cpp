class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even_no=INT_MAX,odd_no=INT_MAX;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0 && nums1[i]<even_no){
                even_no=nums1[i];
            }
            if(nums1[i]%2!=0 && nums1[i]<odd_no){
                odd_no=nums1[i];
            }
        }
        if(odd_no==INT_MAX){
            return true;
        }
        if(even_no<odd_no){
            return false;
        }
        return true;
    }
};