bool containsDuplicate(int* nums, int numsSize) {
    int hash[1000001] = {0}; 

    for (int i = 0; i < numsSize; i++) {
        if (hash[nums[i]] > 0) {
            return true; 
        }
        hash[nums[i]]++; 
    }
    return false; 
}
