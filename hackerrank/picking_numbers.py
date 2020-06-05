#https://www.hackerrank.com/challenges/picking-numbers/problem
def pickingNumbers(a):
    a.sort()
    res1=0
    res2=0
    res=0
    m=0
    for i in range(len(a)):
        res1=a.count(a[i])+a.count(a[i]-1)
        res2=a.count(a[i])+a.count(a[i]+1)
        res=max(res1,res2)
        #print(res)
        if res>=m:
            #print(m)
            m=res
    return m
