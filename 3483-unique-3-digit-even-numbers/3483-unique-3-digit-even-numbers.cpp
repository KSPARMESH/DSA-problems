class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int>s;
        for(int i=0;i<digits.size();i++){
            if(digits[i]==0){
                continue;
            }
            for(int j=0;j<digits.size();j++){
                if(i==j){
                    continue;
                }
                for(int k=0;k<digits.size();k++){
                    if(i==k || j==k){
                        continue;
                    }
                    int num=digits[i]*100+digits[j]*10+digits[k];
                    if(num%2==0){
                        s.insert(num);
                    }
                }
            }
        }
        return s.size();
    }
};