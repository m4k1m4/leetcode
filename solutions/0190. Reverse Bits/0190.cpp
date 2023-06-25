// Time complexity: O(1)
// Space complexity: O(1)
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for ( int i = 31; i >= 0; i-- ) {
            ans |= (n & 1) << i;
            n >>= 1;
        }
        return ans;
    }
};