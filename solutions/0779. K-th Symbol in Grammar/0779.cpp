// Time complexity: O(1)
// Space complexity: O(1)
class Solution {
 public:
  int kthGrammar(int n, int k) {
    int count = __builtin_popcount(k - 1);
    return count % 2 == 0 ? 0 : 1;
  }
};