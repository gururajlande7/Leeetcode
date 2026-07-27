class MinStack {
    vector<int> stack_1;
    vector<int> min_stack;
public:
    MinStack() {}
    
    void push(int value) {
        stack_1.push_back(value);
        if(min_stack.empty() || value <= min_stack.back()) {
            min_stack.push_back(value);
        }
    }
    
    void pop() {
        if(stack_1.back() == min_stack.back()) {
            min_stack.pop_back();
        }
        stack_1.pop_back();
    }
    
    int top() {
        return stack_1.back();
    }
    
    int getMin() {
        return min_stack.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */