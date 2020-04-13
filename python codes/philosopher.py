
class rectangle:
    length=0
    breadth=0
    color=0
    colarea=0
   
    
      


ri=rectangle()
rect=[]
"""colratio=[0,0]"""
"""temparea=0
tempover=0
tc=0
nr=0
nc=0"""     
def over(r1=rectangle(),r2=rectangle()):
    if r1.length<=r2.length:
        min_l=r1.length
    else:
        min_l=r2.length
    if r1.breadth<=r2.breadth:
        min_b=r1.breadth
    else:
        min_b=r2.breadth
        
    return min_l*min_b

def rcalc(i,nr):
    j=i
    temparea=rect[i].colarea
    while(j<nr-2):
        tempover=over(rect[i],rect[j+1])
        ri.colarea=ri.colarea-(temparea-tempover)
        temparea=over(rect[i],rect[j+2])
        j=j+1
 
def ratio(nc,nr,colratio=[]):
    for i in range(nc):
        for j in range(nr):
            if (rect[j].color==i):
                colratio[i]+=rect[j].colarea
    return colratio


def main():
    colratio=[0,0]
    tc=int(input())    
    while(tc>0):
        nr=int(input())
        cnr=nr
        nc=int(input())
        while(cnr>0):
            ri.length=int(input())
            ri.breadth=int(input())
            ri.color=int(input())
            ri.colarea=ri.length*ri.breadth
            rect.append(ri)
            cnr=cnr-1
        tc=tc-1
    for x in range(nr):
        rcalc(x,nr)
    
    print(*ratio(nc,nr,colratio))
main()
print("reached")


    