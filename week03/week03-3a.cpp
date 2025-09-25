/// week03-3a.cpp 二合一的第 1 種方法 把不是 0 的 找出來
/// LeetCode 學習計畫第6題 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; /// 用來放「不是0的數」
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) ans.push_back(nums[i]);
        } ///上面把「不只是 0 的數」 暫時放在 ans 裡, 等一下塞回去
        /// 再用 for 迴圈再放回去
        for(int i=0; i<nums.size(); i++){
            if(i < ans.size()) nums[i] = ans[i]; /// 塞回去
            else nums[i] = 0; /// 其他的放0
        }
    }
};
