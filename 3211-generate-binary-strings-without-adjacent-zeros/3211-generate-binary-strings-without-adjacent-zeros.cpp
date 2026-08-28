class Solution {
public:
    void solve(int n,string s,vector<string>&ans) {
        if(s.length()==n) {
            ans.push_back(s);
            return;
        }
        solve(n,s+"1",ans);
        if(s.empty()||s.back()=='1'){
            solve(n,s+"0",ans);
        }
    }
    vector<string>validStrings(int n) {
        vector<string>ans;
        solve(n,"",ans);
        return ans;
    }
};