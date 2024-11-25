class Solution {
public:
    void swap(int &a, int &b) {
        int t = a; a = b; b = t;    
    }
    
    int Partition(vector<int>& nums, int l, int h, int p) {
        int pivot = nums[p];
        swap(nums[p], nums[h]);
        int ind = l;
        
       for (int i=l; i<h; i++) {
            if (nums[i] < pivot) {
                swap(nums[i], nums[ind]);
                ind++;
            }
        }
        
        swap(nums[ind], nums[h]);
        return ind;
    }
    
    void QuickSort(vector<int>& nums, int l, int h) {
        if (l >= h) return;
        int pivot = medianOfThree(nums, l, h);
        int part = Partition(nums, l, h, pivot);
        QuickSort(nums, l, part - 1);
        QuickSort(nums, part + 1,  h);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        QuickSort(nums, 0, nums.size() - 1);
        return nums;
    }
    
    int medianOfThree(vector<int> &nums, int left, int right) {
        int mid = left + (right - left) / 2;
        if (nums[left] > nums[mid])
            swap(nums[left], nums[mid]);
        if (nums[left] > nums[right])
            swap(nums[left], nums[right]);
        if (nums[mid] > nums[right])
            swap(nums[mid], nums[right]);
        return mid;
    }
};