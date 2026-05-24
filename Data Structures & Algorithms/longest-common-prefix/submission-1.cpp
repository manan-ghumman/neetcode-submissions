class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";
        int i = 0;
        vector<char> kar(strs[0].begin(),strs[0].end());
        while(i < kar.size()) {
            int cnt = 0;
            for(auto str : strs) {
                if(i < str.size() && str[i] == kar[i]) {
                    cnt++;
                    cout<<cnt;
                }
            }
            if(cnt == strs.size()) {
                ans += kar[i];
            }
            else{
                return ans;
            }
            i++;
        }
        return ans;
    }
};