# Time complexity: O(sort)
# Space complexity: O(sort)
class Solution:
  def minIncrementForUnique(self, nums: List[int]) -> int:
    ans = 0
    minAvailable = 0

    for num in sorted(nums):
      ans += max(minAvailable - num, 0)
      minAvailable = max(minAvailable, num) + 1

    return ans