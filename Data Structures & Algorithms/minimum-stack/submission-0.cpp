class MinStack {
public:
    vector<int> nums;
    vector<int> mini;

    MinStack() {
        
    }
    
    void push(int val) {
        nums.push_back(val);

        if(mini.empty() || val <= mini.back()) {
            mini.push_back(val);
        }
    }
    
    void pop() {
        if(nums.back() == mini.back()) {
            mini.pop_back();
        }

        nums.pop_back();
    }
    
    int top() {
        return nums.back();
    }
    
    int getMin() {
        return mini.back();
    }
};