#include <vector>

class Solution {
public:
  std::vector<int> intersection(std::vector<int> &nums1,
                                std::vector<int> &nums2) {
    std::vector<int> result;
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());

    std::set_intersection(nums1.begin(), nums1.end(), nums2.begin(),
                          nums2.end(), std::back_inserter(result));
    std::sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
  }
};
