class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        results=[]
        nums.sort()
        for k in range(0, len(nums)-2):
            if k > 0 and nums[k] == nums[k-1]:
                continue
            if nums[k] > 0:
                break
            
            i=k+1
            j=len(nums)-1

            while(i<j):
                current_sum = nums[k] + nums[i] + nums[j]
                if current_sum == 0:
                    results.append([nums[k], nums[i], nums[j]])
                    i += 1
                    j -= 1
                    while i < j and nums[i] == nums[i-1]:
                        i += 1
                    
                    while i < j and nums[j] == nums[j+1]:
                        j -= 1
                        
                elif current_sum > 0:
                    j -= 1
                else:
                    i += 1 

        return results
            
