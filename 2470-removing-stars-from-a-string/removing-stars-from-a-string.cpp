class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for (char c : s){
            if (c=='*')
                st.pop();
            else 
                st.push(c);
        }

        if (st.empty())  return "";
        string str;
        while (!st.empty()){
            str += st.top(); st.pop();
        }
        reverse(str.begin(), str.end());
        
        return str;
    }
};