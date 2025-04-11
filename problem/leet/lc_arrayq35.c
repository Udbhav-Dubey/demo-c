int searchInsert(int* nums, int numsSize, int target) {
    int start=0,end=numsSize-1;
    while (end>=start){
        int mid = start+(end-start)/2;
        if (nums[mid]==target){
            return mid;
        }
        if (nums[mid]<target){
            start=mid+1;
        }
        if (nums[mid]>target){
        end=mid-1;
        }
    }
    return end+1;
}
