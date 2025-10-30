/// wee08-2.cpp LeetCode 學習計畫 Matrix 矩陣第4題
/// 73. Set Matrix Zeroes 設定一堆 0
/// 要小心, 不能一邊讀、一邊設成 0 ,要兩階段 先讀完、在設 0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        /// 第 1階段, 先讀完, 記下全部的零對應的 i 和 j
        int M = matrix.size(), N = matrix[0].size(); /// 左手 M, 右手 N
        vector<int> markI(M, 0), markJ(N, 0); /// 宣告C++的陣列, 長度分別M N, 裡面都設成0
        for (int i=0; i < M; i++){
            for (int j=0; j < N; j++){
                if ( matrix[i][j]==0){ /// 要記下對應的 i, j
                    markI[i] = 1; /// 標記一下 i 的這整條, 等一下都要清為 0
                    markJ[j] = 1; /// 標記一下 j 的這整條, 等一下都要清為 0
                }
            }
        }
        /// 第 2階段, 再照著 markI 和 markJ 的標記, 把整條都清為 0
        for (int i=0; i < M; i++){
            for (int j=0; j<N; j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j] = 0;
            } /// 如果有標記, 再把它對應的項變成 0
        }
    }
};
