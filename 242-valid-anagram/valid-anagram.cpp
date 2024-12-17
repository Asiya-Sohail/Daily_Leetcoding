class Solution {
public:
    bool isAnagram(string s, string t) {
        //brute force
//         if (s.length() != t.length()) return false;
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         return s == t;   
        
        
        // if (s.length() != t.length()) return false;
        // vector<int> freq(26, 0);
        // for (int i=0; i<s.length(); i++){
        //     freq[s[i] - 'a']++;
        //     freq[t[i] - 'a']--;
        // }
        // for (const int c: freq)
        //     if (c != 0) return false;
        // return true;
        
        //Two freq approach
        if (s.size() != t.size())
            return false;
        vector<int> freq1(26, '0');
        vector<int> freq2(26, '0');
        for (int i=0; i<s.size(); i++){
            freq1[s[i] - 'a']++;
            freq2[t[i] - 'a']++;
        }
        if (freq1.size() != freq2.size())
            return false;
        for (int i=0; i<freq1.size(); i++) {
            if (freq1[i] != freq2[i])
                return false;
        }
        return true;
    }
};

