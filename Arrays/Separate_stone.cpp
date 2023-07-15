import math
class Solution:
    def separateStones(self,N,K,arr):
        #code here
        c1=0
        c2=0
        for i in arr:
            if i==0:
                c1+=1
            if i==1:
                c2+=1
        x=c1%K
        y=c2%K
        a=int(c1/K)
        b=int(c2/K)
        if(x!=0): a=a+1
        if(y!=0):
          b=b+1
        s=a+b
        return s
