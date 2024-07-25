// Time complexity: O(log⁡(min⁡(ranks)*cars^2))
// Space complexity: O(1)
class Solution {
 public:
  long long repairCars(const vector<int>& ranks, int cars) {
    long l = 0;
    long r = static_cast<long>(ranges::min(ranks)) * cars * cars;

    while (l < r) {
      const long m = l + (r - l) / 2;
      if (numCarsFixed(ranks, m) >= cars)
        r = m;
      else
        l = m + 1;
    }

    return l;
  }

 private:
  long numCarsFixed(const vector<int>& ranks, long minutes) {
    long carsFixed = 0;

    for (const int rank : ranks)
      carsFixed += sqrt(minutes / rank);

    return carsFixed;
  }
};