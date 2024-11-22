class Solution {
public:
    string frequencySort(string s) {
        map<char, int> freq;
        for (char c: s)
            freq[c]++;
        priority_queue<pair<int, char>> maxHeap;
        for (auto& entry: freq)
            maxHeap.push({entry.second, entry.first});
        string res;
        while (!maxHeap.empty()){
            if (maxHeap.top().first > 1){
                for (int j=0; j<maxHeap.top().first; j++)
                    res += maxHeap.top().second;
                maxHeap.pop();
            } else {
                res += maxHeap.top().second;
                maxHeap.pop();
            }
        }
        return res;
    }
};