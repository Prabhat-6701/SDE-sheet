class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
         counter = {}
         for i in nums:
            if i in counter:
                return True
            else:
                counter[i] = 1
         return False
        
        