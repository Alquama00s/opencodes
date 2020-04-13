# -*- coding: utf-8 -*-
"""
Created on Sun Mar 22 21:36:45 2020

@author: ALQUAMA
"""

t=0
n=0
x=0
y=0
s=""
sl=[]
output=[]
def multi():
    global sl
    global n
    counter=sl[0]
    for i in range(n-1):
         if(sl[i+1]==counter):
            sl[i+1]=''
         else:
            counter=sl[i+1]
def gift():
    a=0
    b=0
    global sl
    global x
    global y
    for i in range(n):
        if (sl[i]=='L'and a==0):
            x=x-1
            a=1
            b=0
        if (sl[i]=='R'and a==0):
            x=x+1
            a=1
            b=0
        if (sl[i]=='U'and b==0):
            y=y+1
            a=0
            b=1
        if (sl[i]=='D'and b==0):
            y=y-1
            a=0
            b=1
        
def inp():
    global t,n,s,sl,output,x,y
    t=int(input())
    for i in range(t):
        n=int(input())
        s=input()
        sl=list(s)
        multi()
        gift()
        print(x,end=" ")
        print(y)
        x=0
        y=0
        
    
inp()
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   