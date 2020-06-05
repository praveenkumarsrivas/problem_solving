#https://www.hackerrank.com/challenges/drawing-book/problem
def pageCount(n, p):
    if p==1:
        return 0
    l=[]
    if(n%2==0):
        l.append([1])
        for i in range(2,n,2):
            if(i+1<=n):
                l.append([i,i+1])
            else:
                l.append([i])
        l.append([n])
    else:
        l.append([1])
        for i in range(2,n,2):
            if(i+1<=n):
                l.append([i,i+1])                
            else:
                l.append([i])
    c=0
    
    if n-p>abs(1-p):
        #print(l)
        for i in range(len(l)):
            if p in l[i]:
                break
            else:
                c+=1
                
    else:
        l.reverse()
        #print(l)
        for i in range(len(l)):
            if p in l[i]:
                break
            else:
                c+=1
                
    return c        
