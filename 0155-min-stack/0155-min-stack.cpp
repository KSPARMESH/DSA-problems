class MinStack {
public:
    stack<int>stk,minstk;
    
    void push(int value) {
        stk.push(value);
        if(minstk.empty()){
            minstk.push(value);
        }
        else if(minstk.top()>=stk.top()){
            minstk.push(stk.top());
        }
    }
    
    void pop() {
        if(!stk.empty() && !minstk.empty()){
            if(stk.top()==minstk.top()){
                stk.pop();
                minstk.pop();
            }
            else{
                stk.pop();
            }
        }
    }
    
    int top() {
        if(!stk.empty()){
            return stk.top();
        }
        return NULL;
    }
    
    int getMin() {
        if(!minstk.empty()){
            return minstk.top();
        }
        return NULL;
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