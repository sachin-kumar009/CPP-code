#include <iostream>
#include <vector>
#include <climits>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if (n1 > n2) {
          return findMedianSortedArrays(nums2, nums1);
        }        

        int low = 0, high = n1, halfLen = (n1 + n2 + 1) / 2;
        while (low <= high) {
          int mid1 = (low + high) / 2;
          int mid2 = halfLen - mid1;
          int L1 = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1];
          int L2 = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];
          int R1 = (mid1 == n1) ? INT_MAX : nums1[mid1];
          int R2 = (mid2 == n2) ? INT_MAX : nums2[mid2];

          if (L1 > R2) {
              high = mid1 - 1;
          } else if (L2 > R1) {
              low = mid1 + 1;
          } else {
              if ((n1 + n2) % 2 == 0) {
                  return (max(L1, L2) + min(R1, R2)) / 2.0;
              } else {
                  return max(L1, L2);
              }
          }
        }
    }

int main() {
  vector<int> nums1 = {1,3} , nums2 = {2};


  cout << findMedianSortedArrays(nums1,nums2) << endl;

  return 0;
}