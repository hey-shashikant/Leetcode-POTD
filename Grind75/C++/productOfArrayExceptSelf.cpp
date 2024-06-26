class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int l2r = 1, r2l = 1;
        for (int i = 0; i < n; i++) {
            ans[i] *= l2r;
            l2r *= nums[i];

            ans[n-i-1] *= r2l;
            r2l *= nums[n-i-1];
        }
        return ans;
    }
};