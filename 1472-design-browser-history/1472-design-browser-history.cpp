class BrowserHistory {
public:
    stack<string>backward;
    stack<string>forwardH;
    BrowserHistory(string homepage) {
        backward.push(homepage);
    }
    
    void visit(string url) {
        while(!forwardH.empty()){
            forwardH.pop();
        }
        backward.push(url);
    }
    
    string back(int k) {
       while(backward.size()>1 && k>0){
        forwardH.push(backward.top());
        backward.pop();
        k--;
       }
       return backward.top();
    }
    
    string forward(int k) {
       while(!forwardH.empty() && k>0){
        backward.push(forwardH.top());
        forwardH.pop();
        k--;
       }
       return backward.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */