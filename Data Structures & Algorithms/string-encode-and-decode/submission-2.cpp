class Solution {
public:

    string encode(vector<string>& strs) {
        string st = "";

        for(string str : strs) {
            st += to_string(str.length()) + "#" + str;
        }

        return st;
    }

    vector<string> decode(string s) {
        vector<string> v;

        int i = 0;

        while(i < s.length()) {

            string len = "";

            // read length
            while(s[i] != '#') {
                len += s[i];
                i++;
            }

            int length = stoi(len);

            i++; // skip '#'

            string word = s.substr(i, length);

            v.push_back(word);

            i += length;
        }

        return v;
    }
};