class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        int a, b;
        int curr = 0;

        for (int i = 0; i < tokens.size(); i++) {
            st.push(tokens[i]);

            if (tokens[i] == "+") {
                st.pop();
                b = stoi(st.top());
                st.pop();
                a = stoi(st.top());
                curr = a + b;
                st.pop();
                st.push(to_string(curr));
            } else if (tokens[i] == "-") {
                st.pop();
                b = stoi(st.top());
                st.pop();
                a = stoi(st.top());
                curr = a - b;
                st.pop();
                st.push(to_string(curr));
            } else if (tokens[i] == "*") {
                st.pop();
                b = stoi(st.top());
                st.pop();
                a = stoi(st.top());
                curr = a * b;
                st.pop();
                st.push(to_string(curr));
            } else if (tokens[i] == "/") {
                st.pop();
                b = stoi(st.top());
                st.pop();
                a = stoi(st.top());
                curr = a / b;
                st.pop();
                st.push(to_string(curr));
            }
        }
        return stoi(st.top());
    }
};
