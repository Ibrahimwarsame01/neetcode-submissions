class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        length = len(nums)
        s = set(nums)
        length2 = len(s)
        if length != length2:
            return True
        return False


