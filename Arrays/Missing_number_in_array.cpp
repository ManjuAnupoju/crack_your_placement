class Solution:
    def missingNumber(self,array,n):
        # code here
        sum=0
        for i in range(1,n+1):
            sum+=i
        for i in array:
            sum-=i
        return sum
