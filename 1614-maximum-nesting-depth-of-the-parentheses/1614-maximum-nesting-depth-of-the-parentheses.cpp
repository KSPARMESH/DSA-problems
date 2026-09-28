class Solution {
public:
    int maxDepth(string s) {
        int count=0,mx=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') count++;
            else if(s[i]==')') count--;
            mx=max(mx,count);
        }
        return mx;
    }
};