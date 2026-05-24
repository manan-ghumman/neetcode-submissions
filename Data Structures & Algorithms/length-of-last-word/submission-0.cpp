class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0;
        for(int i = s.size() - 1 ; i >=0; i--) {
            if(isalpha(s[i])) {
                while(isalpha(s[i])) {
                    c++;
                    i--;
                }
                break;
            }
            else continue;
        }
        return c;
    }
};