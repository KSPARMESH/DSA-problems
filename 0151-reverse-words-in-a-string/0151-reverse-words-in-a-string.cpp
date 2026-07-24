class Solution {
public:
    string reverseWords(string s) {
        vector<string>arr;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                temp+=s[i];
            }
            else if(!temp.empty()){
                arr.push_back(temp);
                temp="";
            }
        }
        if(!temp.empty()){
            arr.push_back(temp);
        }
        temp="";
        for(int i=arr.size()-1;i>=0;i--){
            temp+=arr[i];
            if(i!=0) temp+=' ';
        }
        return temp;
    }
};