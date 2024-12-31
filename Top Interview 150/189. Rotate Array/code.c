void rotate(int* nums, int numsSize, int k) {
    int nums2[numsSize];

    for (int i = 0; i < numsSize; i++) {
        nums2[(i + k) % numsSize] = nums[i];
    }

    for (int i = 0; i < numsSize; i++) {
        nums[i] = nums2[i];
    }
}