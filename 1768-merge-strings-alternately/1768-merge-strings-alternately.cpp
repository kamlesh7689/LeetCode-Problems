class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.size();
        int m = word2.size();
        int i=0,j=0;
        int flag=0;
        while(i<n && j<m){
            if(flag == 0){
                ans += word1[i];
                i++;
                flag = 1;
            }
            else{
                ans += word2[j];
                j++;
                flag = 0;
            }
        }
        if(i<n){
            while(i<n){
                ans +=word1[i];
                i++;
            } 
        }
        else{
            while(j<m){
                ans +=word2[j];
                j++;
            }
        }
        return ans;
    }
};