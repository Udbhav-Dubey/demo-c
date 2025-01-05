#include <stddef.h>

// Function to solve the Two Sum problem
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    static int result[2]; // Use a static array to store the result
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2; // Set the return size to 2
                return result;
            }
        }
    }
    *returnSize = 0; // If no solution is found, set return size to 0
    return NULL;
}
