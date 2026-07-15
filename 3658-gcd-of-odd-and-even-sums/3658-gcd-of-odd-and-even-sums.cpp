class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven=0,sumOdd=0,i=1;
        n*=2;
        while(n--){
            if(i%2==0){
                sumEven+=i;
            }
            else{
                sumOdd+=i;
            }
            i++;
        }
        return __gcd(sumEven,sumOdd);
    }
};