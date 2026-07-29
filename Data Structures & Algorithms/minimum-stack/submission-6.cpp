class MinStack {
   public:
    stack<int> min;
    stack<int> st;
    int curr = INT_MAX;

    MinStack() {}

    void push(int val) {
        st.push(val);
        if (curr >= val) {
            min.push(val);
            curr = val;
        } else {
            min.push(curr);
        }
    }

    void pop() {
        st.pop();
        min.pop();
        if (!min.empty()) {
            curr = min.top();
        }
        else{
            curr=INT_MAX;
        }
    }

    int top() { return st.top(); }

    int getMin() { return min.top(); }
};
