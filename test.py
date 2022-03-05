from collections import defaultdict
import time




a=int(input())
p1=time.time_ns()

d=defaultdict()
p=(a//2) + 1
while(p):
    if (a%p == 0): 
        d[abs(p-(a//p))]=([p, a//p])
    p-=1
v=d.get(min(sorted(d)))
print("f1 = ", v[0],",", " f2 = ", v[1])

p2=time.time_ns()

print("time taken by program in nano second: ", abs(p2-p1))