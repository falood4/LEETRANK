#User function Template for python3

class Solution:
    def minOperation(self, n):
        temp=n/2
        res=0
        steps=0
        
        #step 1 0+1=1
        res+=1
        steps+=1
        #step 2: double till temp
        while(res<temp):
            res=res*2
            steps+=1
                
        
        while(res<n):
            res=res+1
            steps+=1
            
        return steps
            
        
