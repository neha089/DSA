#include <iostream>
#include <vector>
using namespace std;

int longestEvenOddSubarray(vector<int>& nums, int threshold) {
    int n = nums.size();
    int maxLength = 0;
    int currentLength = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0 && nums[i] <= threshold) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 0;
        }
    }

    maxLength = max(maxLength, currentLength);
    return maxLength;
}

int main() {
    vector<int> nums = {3, 2, 5, 4};
    int threshold = 5;
    int result = longestEvenOddSubarray(nums, threshold);
    cout << "Length of longest subarray: " << result << endl;

    return 0;
}
