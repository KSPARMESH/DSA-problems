class Solution {
public:
    bool checkDivisibility(int n) {
        int given_number=n,sum=0,prod=1;
        while(n!=0){
            int temp=n%10;
            sum+=temp;
            prod*=temp;
            n/=10;
        }
        if(given_number%(sum+prod)==0){
            return 1;
        }
        return 0;
    }
};