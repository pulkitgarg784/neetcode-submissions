class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stk;
        std::unordered_map<char, char> closeOpen = {{')', '('}, {']', '['}, {'}', '{'}};
        for (char c: s){
            if(closeOpen.count(c)){
                if (!stk.empty() && stk.top() == closeOpen[c]){
                    stk.pop();
                } else return false;
            } else stk.push(c);
        }
        return stk.empty();
    }
};
