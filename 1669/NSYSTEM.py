#!/usr/bin/env python

def r1(a):
	i = 0
	
	multiplier = 1

	for _a in a:
  
 		if _a == 'm':
			i = i + ( multiplier * 1000)
			multiplier = 1

		if _a == 'c':
			i = i + ( multiplier * 100)
			multiplier = 1

		if _a == 'x':
			i = i + ( multiplier * 10)
			multiplier = 1

		if _a == 'i':
			i = i + multiplier
			multiplier = 1
  
		if ((_a >= '2') and (_a <= '9')):
			multiplier = (ord(_a)-ord('0'))
 
	return i
 
def r2(n):
         result = ''
         i = n/1000
         if (i):
		if (i!=1): 
			result+=str(i)
                result+='m'
         n = n % 1000
         
         i = n/100
         if (i):
		if (i!=1):
			result+=str(i)
                result+='c'
         n = n % 100
         
         i = n/10
         if (i):
		if (i!=1):
                	result+=str(i)
                result+='x'
         n = n % 10
         
         i = n
         if (i):
		if (i!=1):
                result+=str(i)
               	result+='i'
         return result

t = 0;

k1 = ''

k2 = ''

t = input()

while(t>0):
	k1,k2=raw_input().split()	
	print r2(r1(k1)+r1(k2))
	t = t-1	

#print r2(r1('xi')+r1('x9i'))
#print r2(r1('i')+r1('9i'))
#print r2(r1('c2x2i')+r1('4c8x8i'))
#print r2(r1('m2ci')+r1('4m7c9x8i'))
#print r2(r1('9c9x9i')+r1('i'))
#print r2(r1('i')+r1('9m9c9x8i'))
#print r2(r1('m')+r1('i'))
#print r2(r1('i')+r1('m'))
#print r2(r1('m9i')+r1('i'))
#print r2(r1('9m8c7xi')+r1('c2x8i'))


