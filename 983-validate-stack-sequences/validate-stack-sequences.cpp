class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s; 
        int i = 0;
        for (int x : pushed) {
            s.push(x);
            while (!s.empty() && i < pushed.size() && s.top() == popped[i]){
                s.pop();
                i++;
            }
        }
        return s.size() == 0;
    }
};