class MyStack {
public:
     MyStack() {
     }
    queue<int> q;

    void push(int x) 
    {
        q.push(x);
        for(int i = 0; i<q.size()-1; i++){
            q.push(q.front());
            q.pop();
    }
    }

    int pop() {
        int result = q.front();
        q.pop();
        return result;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};
