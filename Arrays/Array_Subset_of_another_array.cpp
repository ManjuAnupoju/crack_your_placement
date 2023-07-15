def isSubset( a1, a2, n, m):
    superdict={}
    subdict={}
    for i in a1:
        if i not in superdict:
           superdict[i]=1
        else:
            superdict[i]+=1
    for i in a2:
        if i not in subdict:
            subdict[i]=1
        else:
            subdict[i]+=1
    for i in subdict:
        if i in superdict:
            if(subdict[i]>superdict[i]):
                return "No"
        else:
            return "No"
    return "Yes"
