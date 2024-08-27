// Time complexity: O(1)
// Space complexity: O(1)
class Solution {
 public:
  int findComplement(long num) {
    for (long i = 1; i <= num; i <<= 1)
      num ^= i;

    return num;
  }
};