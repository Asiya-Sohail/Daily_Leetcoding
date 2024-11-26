class BrowserHistory {
    stack<string> hist, forw;
    string curr;
public:
    BrowserHistory(string homepage) {
        curr = homepage;
    }
    
    void visit(string url) {
        hist.push(curr);
        curr = url;
        while (!forw.empty()) forw.pop(); // Clear forward stack
    }
    
    string back(int steps) {
        int i = 0;
        while (!hist.empty() && i < steps) {
            forw.push(curr);
            curr = hist.top(); hist.pop(); i++;
        }
        return curr;
    }
    
    string forward(int steps) {
        int i = 0;
        while (!forw.empty() && i < steps) {
            hist.push(curr);
            curr = forw.top(); forw.pop(); i++;
        }
        return curr;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */