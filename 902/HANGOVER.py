#!/usr/bin/env python

#import datetime

# time_pre, time_post : used to test execution time

def hangover(c):
	n = 276

	t = 1.00

	sum = 0.01

	input_n = n

	n=1.00

	#time_pre = datetime.datetime.now()

	while n <= input_n:
		t = 1.00
		sum = 0.01
		while t<=n:
			t+=1.00
			sum+= 1.00/(t)
		n+=1.00
		#print n-1.00,' : ',sum-0.01
		if sum-0.01>c :
			#print n-1.00	
			#print sum-0.01 - c
			return n-1.00
	#time_post = datetime.datetime.now()

	#print 'Total Time: ', (time_post-time_pre).microseconds/1000000.0000000,'\n'
c = input()

while c!=0.00:		
	print int(hangover(c)),' card(s)'
	c = input()
