class Solution {
public:
    int mySqrt(int n) {
       

        int low = 0, high = n;
        int ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long val = mid * mid;

            if (val == n) {
                return mid;
            }
            else if (val < n) {
                ans = mid;       
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }
};
    
