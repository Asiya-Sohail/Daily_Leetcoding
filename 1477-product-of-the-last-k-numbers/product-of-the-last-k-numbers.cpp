class ProductOfNumbers {
    vector<int> queue;
public:
    // ProductOfNumbers() {
    //     queue.push_back(1);
    // }
    
    void add(int num) {
        queue.push_back(num);
    }
    
    int getProduct(int k) {
        int prod = 1;
        for (int i = queue.size() - k; i < queue.size(); i++) {
            prod *= queue[i];
        }
        return prod;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */