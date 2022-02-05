class Solution {
public:
 void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        int res[len];
        for(int i = 0; i < len; i++) {
            res[(i + k) % len] = nums[i];
        }
        for(int i = 0; i < len; i++) {
            nums[i] = res[i];
        }
    }
};
