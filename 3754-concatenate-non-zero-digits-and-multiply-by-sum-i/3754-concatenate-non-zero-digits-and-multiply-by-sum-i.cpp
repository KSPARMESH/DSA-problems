class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        int x=0,sum=0;
        for(int i=0;s[i];i++){
            if(s[i]=='0'){
                continue;
            }
            x=x*10+s[i]-'0';
            sum+=s[i]-'0';
        }
        return (long long)x*sum;
    }
};