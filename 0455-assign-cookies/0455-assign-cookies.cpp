class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int len1=g.size();
        int len2=s.size();
        int count=0;
        if(len1==0 || len2==0){
            return 0;
        }
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int i=0;
        int j=0;
        while(i<len1 && j<len2){
            if(g[i]<=s[j]){
                count++;
                i++;
            }
            j++;
        }
        return count;
    }
};