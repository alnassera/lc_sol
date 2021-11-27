vector<int> getConcatenation(vector<int>& nums) {
        int n = (int) nums.size();
        vector<int> ans (2*n,0);
        for(int i = 0; i < n; i++)
            ans[i] = ans[i+n] = nums[i];
        return ans;
    }
