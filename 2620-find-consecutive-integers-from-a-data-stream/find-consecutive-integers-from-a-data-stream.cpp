class DataStream {
    int k, val, cnt = 0;
public:
    DataStream(int _val, int _k) {
        val = _val; k = _k;
    }
    
    bool consec(int num) {
        if (num == val) cnt++;
        else cnt = 0;
        
        if (cnt >= k) return true;
        else return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */