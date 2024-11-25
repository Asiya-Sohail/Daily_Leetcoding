class Solution {
public:
//     void merge(vector<vector<int>>& arr, int l, int mid, int h) {
//         int n1 = mid - l + 1;
//         int n2 = h - mid;
//         vector<vector<int>> L(n1), R(n2);
//         for (int i=0; i<n1; i++) 
//             L[i] = arr[l + i];
//         for (int i=0; i<n2; i++) 
//             R[i] = arr[mid + 1 + i];
//         int i=0, j=0, k=l;
//         while(i < n1 && j < n2) {
//             if (L[i] <= R[j]) {
//                 arr[k] = L[i];
//                 i++; k++;
//             } else {
//                 arr[k] = R[j];
//                 j++; k++;
//             }
//         }
//         while (i < n1) {
//             arr[k] = L[i];
//             i++; k++;
//         }
//         while (j < n2) {
//             arr[k] = R[j];
//             j++; k++;
//         }
//     }
    
//     void mergesort(vector<vector<int>>& arr, int l, int h) {
//         if (l == h) return;
//         int mid = l + (h-l) / 2;
//         mergesort(arr, l, mid);
//         mergesort(arr, mid+1, h);
//         merge(arr, l, mid, h);
//     }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans;
        // mergesort(intervals, 0, n-1);
        sort(intervals.begin(), intervals.end());
        for (int i=0; i<n; i++) {
            int l = intervals[i][0];
            int h = intervals[i][1];
            
            while( i+1 < n && intervals[i+1][0] <= h){
                h = max(h, intervals[i+1][1]);
                i++;
            }
            
            vector<int> temp;
            temp.push_back(l);
            temp.push_back(h);
            ans.push_back(temp);
        }
        return ans;
    }
};