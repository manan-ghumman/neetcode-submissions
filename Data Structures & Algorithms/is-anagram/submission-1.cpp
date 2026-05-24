class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> maps, mapt;
        for(char ch : s) maps[ch]++;
        for(char ch : t) mapt[ch]++;
        if(maps == mapt) return true;
        return false;
    }
};
