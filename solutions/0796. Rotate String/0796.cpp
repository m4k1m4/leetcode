// Time complexity: O(n)
// Space complexity: O(n)
class Solution {
 public:
  bool rotateString(const string &s, const string &goal) {
    return s.size() == goal.size() && (s + s).find(goal) != string::npos;
  }
};