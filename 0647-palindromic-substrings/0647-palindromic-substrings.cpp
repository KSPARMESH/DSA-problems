class Solution {
public:
    int countSubstrings(string s) {
        int count=0,n=s.size();
        for(int i=0;i<n;i++){
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                count++;
                l--;
                r++;
            }
            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                count++;
                l--;
                r++;
            }
        }
        return count;
    }
};