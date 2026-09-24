int rob(int* nums, int n) {
    if(n==0) return 0;
    else if(n==1) return nums[0];
    int second = nums[0];
    int first = (nums[0] > nums[1]) ? nums[0] : nums[1];
    for(int i=2;i<n;i++){
        int now=(first>second+nums[i]) ? first:second+nums[i];
        second=first;
        first=now;
    }
    return first;
}