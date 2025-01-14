# Time complexity: O(nlogn)
# Space complexity: O(n)
class Solution:
  def minimumMountainRemovals(self, nums: List[int]) -> int:
    left = self._lengthOfLIS(nums)
    right = self._lengthOfLIS(nums[::-1])[::-1]
    maxMountainSeq = 0

    for l, r in zip(left, right):
      if l > 1 and r > 1:
        maxMountainSeq = max(maxMountainSeq, l + r - 1)

    return len(nums) - maxMountainSeq

  def _lengthOfLIS(self, nums: List[int]) -> List[int]:
    tails = []
    dp = []

    for num in nums:
      if not tails or num > tails[-1]:
        tails.append(num)
      else:
        tails[bisect.bisect_left(tails, num)] = num
      dp.append(len(tails))

    return dp