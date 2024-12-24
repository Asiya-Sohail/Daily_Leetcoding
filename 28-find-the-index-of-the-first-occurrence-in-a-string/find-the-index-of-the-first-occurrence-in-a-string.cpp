class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.find(needle) != string::npos)
            return haystack.find(needle);
        else 
            return -1;
        
        //Error
    //     int k , j;
    //     for (int i=0; i<= haystack.size() - needle.size(); i++) {
    //         k = 0;
    //         for (j = i; k<needle.size(); j++, k++) {
    //             if (haystack[j] != needle[k])
    //                 break;
    //         }                
    //         if (k == needle.size())
    //             return i;   
    //     }
    //     return -1;
    }
};