class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string result;
        int i=0;
        while(s[i]!='\0'){
            int flg1=0;
            string word;
            if(s[i]=='('){
                flg1=1;
                while(i<s.size() && s[++i]!=')'){
                    word+=s[i];
                }
            }
            else{
                if(s[i]!=')'){
                    result+=s[i];
                }
                i++;
            }
            if(flg1){
                int flg2=0;
                for(int j=0;j<knowledge.size();j++){
                    if(word==knowledge[j][0]){
                        flg2=1;
                        result+=knowledge[j][1];
                    }
                }
                if(!flg2){
                    result+='?';
                }
            }
        }
        return result;
    }
};