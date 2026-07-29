class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int a, b;
        int curr = 0;

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+") {
                b = st.top();
                st.pop();
                a = st.top();
                curr = a + b;
                st.pop();
                st.push(curr);
            } else if (tokens[i] == "-") {
                b = st.top();
                st.pop();
                a = st.top();
                curr = a - b;
                st.pop();
                st.push(curr);
            } else if (tokens[i] == "*") {
                b = st.top();
                st.pop();
                a = st.top();
                curr = a * b;
                st.pop();
                st.push(curr);
            } else if (tokens[i] == "/") {
                b = st.top();
                st.pop();
                a = st.top();
                curr = a / b;
                st.pop();
                st.push(curr);
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
