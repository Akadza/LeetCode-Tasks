#include <iostream>
#include <vector>

using std::vector;
using std::string;


class Solution {
public:
    static double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // "[1 5 9 16 83 103]" -> n.size() = 6; 
        // "[3 4 19 43 600]" -> m.size() = 5;
        // "[1 3 4 5 9 16 19 43 83 103]" -> (m + n).size() = 10;
        int n = nums1.size(), m = nums2.size();
        int idx_n = 0, idx_m = 0;
        int lastIndex = -1;

        vector<int> v(n + m, 0);

        while (idx_n < n && idx_m < m) {
            if (nums1[idx_n] <= nums2[idx_m]) v[++lastIndex] = nums1[idx_n++];
            else v[++lastIndex] = nums2[idx_m++];
        }
        while (idx_n < n) v[++lastIndex] = nums1[idx_n++];
        while (idx_m < m) v[++lastIndex] = nums2[idx_m++];
        int size = n + m;
        return size % 2 ? v[size / 2] : (v[size / 2] + v[size / 2 - 1]) / 2.0;
    }
};


int main() {
    vector<int> v1 = { 1, 2 };
    vector<int> v2 = { 3, 4 };
    std::cout << Solution::findMedianSortedArrays(v1, v2) << std::endl;


    return 0;
}