/// week03-3b.cpp 二合一的第 1 種方法 直接移就好了
/// LeetCode 學習計畫第6題 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; /// 直接移動 nums[k] = nums[i], 再把 k++
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) nums[k++] = nums[i];
        }
        for(int i=k; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};
