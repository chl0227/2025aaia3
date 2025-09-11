## week01-2b.py 使用 Python 的版 1 使用 .find()函式
## LeetCode 28. Find the Index of the First Occurrence in a String
## 在haystack稻草堆 裡找到needle 針(大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return  haystack.find(needle)
