
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        pair<string, vector<string>> P;
        for(auto &st : strs) {
            string og = st;
            sort(st.begin(), st.end());
            vector<string> v;
            v = mpp[st];
            v.push_back(og);
            mpp[st] = v;
        }
        vector<vector <string>> res;
        for(auto it : mpp) {
            P = it;
            res.push_back(P.second);
        }
        return res;
    }
};
