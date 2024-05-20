class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());
        string ans = "";
        string st1 = strs[0];
        string st2 = strs[n-1];
        int m = min(st1.size(), st2.size());
        for(int i=0; i<m; i++){
            if(st1[i] != st2[i])
                return ans;
            ans += st1[i];
        }
        return ans;
    }
};