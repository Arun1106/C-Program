n,m=input().split(" ")
g=int(n)
h=int(m)
la=0
s=[]
for i in range(g):
    s.append([])
for j in range(h):
    p,q,r=input().split(" ")
    p1=int(p)
    q1=int(q)
    r1=int(r)
    if p1==1:
        seq=((q1^la)%g)
        s[seq].append(r1)
    elif p1==2:
        seq=((q1^la)%g)
        e= r1 % len(s[seq])
        v=s[seq][e]
        la=v
        print(la)
 
        
        