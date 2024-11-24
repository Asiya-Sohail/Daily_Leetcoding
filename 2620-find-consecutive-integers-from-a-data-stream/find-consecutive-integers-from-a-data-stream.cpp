class DataStream {
    int k, val, cnt;
public:
    DataStream(int _val, int _k) {
        val = _val; k = _k; cnt = 0;
    }
    
    bool consec(int num) {
        if (num == val) cnt++;
        else cnt = 0;
        
        // if (cnt >= k) return true;
        // else return false;
        return cnt >= k;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */