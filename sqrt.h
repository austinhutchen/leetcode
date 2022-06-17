

class Solution {
public:
  int mySqrt(float x) {
// find a way to include decimals in binary search, and convert to integer after. This only works for whole numbers
    int first = 0;
    int last = x/2;
    while (first <= last) {
      int mid = (first + last) / 2;
      if(mid*mid==x) {
      return mid;
    }
    // how do I define this target?
      else if (mid*mid < x) {
        first = mid + 1;
      } else if (mid*mid > x) {
        last = mid - 1;
      }
    }
    return 0;
  }
};


