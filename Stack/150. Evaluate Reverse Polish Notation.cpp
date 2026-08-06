class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (int i = 0; i < tokens.size(); i++) {
            string c = tokens[i];

            if ((c == "+" || c == "-" || c == "/" || c == "*")) {
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                int p = 0;
                if (c == "+") {
                    p = a + b;
                } else if (c == "-") {
                    p = a - b;
                } else if (c == "*") {
                    p = a * b;
                } else if (c == "/") {
                    p = a / b;
                }
                s.push(p);
            }else{
                s.push(stoi(c));
            }

            
        }
        return s.top();
    }
    
};