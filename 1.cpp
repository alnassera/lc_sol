vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans (2, 0);
        int goal;
        std::unordered_map<int, int> m;
        std::unordered_map<int,int>::const_iterator out;
        for(int i = 0; i < nums.size(); i++) m[nums[i]] = i;
        for(int i = 0; i < nums.size(); i++){
            goal = target - nums[i];
            out = m.find(goal);
            if(out != m.end() && out->second != i) {
                ans[0] = i;
                ans[1] = out->second;
            }
        }
        return ans;
    }
