class MinStack {
public:
    vector<int> a;
    MinStack() {
        a.clear();
    }
    
    void push(int val) {
        a.push_back(val);
    }
    
    void pop() {
        if (a.empty())
        {
            return;
        }
        a.pop_back();
    }
    
    int top() {
        return a.back();
    }
    
    int getMin() {
        return *min_element(a.begin(), a.end());
    }
};
