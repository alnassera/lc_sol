vector<int> productExceptSelf(vector<int> &nums)
{
    //O(1) space, O(n) time, no div
    vector<int> ans(size(nums), 1);
    for (int i = 1; i < size(nums); i++)
        ans[i] = ans[i - 1] * nums[i - 1];
    for (int i = size(nums) - 1, rightTot = 1; i >= 0; i--)
    {
        ans[i] *= rightTot;
        rightTot *= nums[i];
    }
    return ans;
}
