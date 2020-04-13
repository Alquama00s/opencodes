s=""
sl=[]
n=0
t=0
q=0
qt=0
l=0
r=0
p=0
q=0
c=''
mod=pow(10,9)+7
def t1(l,r,c):
    l=input()
    r=input()
    c=input()
    for i in range(l,r):
        sl[i]=c

def t2(l,r,p,q):
    l=input()
    r=input()
    p=input()
    q=input()
    for i in range(l,r):
        if sl[i]=='A':
           p=(p-q+mod)%mod
           q=(p+q)%mod
        elif sl[i]=='B':
           p=(p+q)%mod
           q=(q-p+mod)%mod
            
           
def inp():
    t=int(input())
    for i in range(t):
        n=int(input())
        s=input()
        sl=list(s)
        q=int(input())
        for j in range(q):
            qt=int(input())
            if qt==1:
                t1()
            elif qt==2:
                t2()
        

inp()