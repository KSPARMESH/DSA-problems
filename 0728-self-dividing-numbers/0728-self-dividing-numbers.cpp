class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            int temp=i,flg=1;
            while(temp!=0){
                int rem=temp%10;
                if(rem==0 || i%rem!=0){
                    flg=0;
                    break;
                }
                temp/=10;
            }
            if(flg){
                ans.push_back(i);
            }
        }
        return ans;
    }
};