class Solution(object):
    def moveZeroes(self, nums):
        j=0
        for i in range(len(nums)):
            if nums[i]==0:
                j=i
                for k in range(j, len(nums)):
                    if nums[k]!=0:
                        nums[j], nums[k]=nums[k], nums[j]
                        break  
   
            

        return nums
