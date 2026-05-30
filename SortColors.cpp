class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt[3] = {0};

        for(int x : nums)
            cnt[x]++;

        int idx = 0;

        for(int color = 0; color < 3; color++) {
            while(cnt[color]--) {
                nums[idx++] = color;
            }
        }
    }
};
