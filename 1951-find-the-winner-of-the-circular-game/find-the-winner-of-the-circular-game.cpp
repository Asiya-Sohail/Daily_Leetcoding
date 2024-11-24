class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> vec;
         for (int i = 1; i <= n; i++) 
             vec.push_back(i); 
        
        int start = 0;
        while(vec.size() > 1) {
            int removal = (start + k - 1) % vec.size();
            vec.erase(vec.begin() + removal);
            start = removal;
        }
        return vec.front();
    }
};