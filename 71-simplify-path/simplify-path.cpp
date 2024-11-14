class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s;
        string res, curr="";
        for (char c: path + '/') {
            if (c == '/') {
                if (curr == "..") {
                    if (!s.empty())
                        s.pop();
                }
                else if (curr != "." && curr != "")
                    s.push(curr);
                curr = "";
            }
            else 
                curr += c;
        }

        vector<string> answer;
        while(!s.empty()) {
           answer.push_back(s.top());
            s.pop();
        }
        for (int i=answer.size()-1; i>=0; i--) {
            res += answer[i];
            if (i!=0) res+= "/";
        }
        return "/" + res;
    }
};