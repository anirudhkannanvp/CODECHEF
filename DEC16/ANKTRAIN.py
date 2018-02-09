#!/usr/bin/python
choices={1:"LB",2:"MB",3:"UB",4:"LB",5:"MB",6:"UB",7:"SU",8:"SL",}
choices1={1:4,2:5,3:6,4:1,5:2,6:3,7:8,8:7}
t=input()
while t:
	t-=1
        n=input()
	n1=n%8
        if(n1==0):n1=8
        n=n-n1+choices1.get(n1)
        var = choices.get(n1)
        print "%d%s" % (n,var)
