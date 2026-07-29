class MyQueue {
public:
    stack<int>stk,temp;
    
    void push(int x) {
        stk.push(x);
    }
    
    int pop() {
        while(!stk.empty()){
            temp.push(stk.top());
            stk.pop();
        }
        int front;
        if(!temp.empty()){
            front=temp.top();
            temp.pop();
        }
        while(!temp.empty()){
            stk.push(temp.top());
            temp.pop();
        }
        return front;
    }
    
    int peek() {
        while(!stk.empty()){
            temp.push(stk.top());
            stk.pop();
        }
        int front;
        if(!temp.empty()){
            front=temp.top();
        }
        while(!temp.empty()){
            stk.push(temp.top());
            temp.pop();
        }
        return front;
    }
    
    bool empty() {
        if(!stk.empty()){
            return 0;
        }
        return 1;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */