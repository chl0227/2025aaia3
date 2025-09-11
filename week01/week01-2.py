## week01-2.py
## LeetCode 28. Find the Index of the First Occurrence in a String
## 在haystack稻草堆 裡找到needle 針(大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) ## 字串的長度
        N = len(needle) ## 字串的長度
        for i in range(H-N+1): ## 要記得+1
            ## 切片 slicing
            if haystack[i:i+N] == needle: ## 找到的話
                return i ## 把位置當答案
        ## 都沒有成功, 離開迴圈的話, 代表找不到
        return -1   ## 沒有找到答案
