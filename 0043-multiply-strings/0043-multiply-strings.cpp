class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0"){
            return "0";
        }
        int m=num1.size(),n=num2.size();
        vector<int>ans(m+n,0);
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int a=num1[i]-'0';
                int b=num2[j]-'0';
                ans[i+j+1]+=a*b;
            }
        }
        for(int i=m+n-1;i>0;i--){
            ans[i-1]+=ans[i]/10;
            ans[i]%=10;
        }
        string prod="";
        int i=0;
        while(i<ans.size() && ans[i]==0){
            i++;
        }
        while(i<ans.size()){
            prod+=char(ans[i]+'0');
            i++;
        }
        return prod;
    }
};