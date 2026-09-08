class Solution {
public:
    int countCommas(int n) {
        long count=0;
        for(long i=1000;i<=n;i++){
            count++;
        }
        return count;
    }
};