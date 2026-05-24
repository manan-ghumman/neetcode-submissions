class Solution {
public:
    bool isValid(string s) {
        stack<char> check;

        for(char ch : s) {

            if(ch == '(' || ch == '[' || ch == '{') {
                check.push(ch);
            }
            else {

                if(check.empty()) return false;

                if((ch == ')' && check.top() == '(') ||
                   (ch == ']' && check.top() == '[') ||
                   (ch == '}' && check.top() == '{')) {

                    check.pop();
                }
                else {
                    return false;
                }
            }
        }

        return check.empty();
    }
};