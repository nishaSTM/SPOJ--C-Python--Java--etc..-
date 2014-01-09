#!/usr/bin/env python

n = input()

_n = 0

l = []

totalcount = 0

while _n < n:
        s = raw_input()
        s = s.split()
        totalcount += s.__len__() - 2
        l.append([int(s[0])])
        for _s in s[2:s.__len__()]:
                l[_n].append(int(_s))
        _n += 1

_n = 1

while _n < n:
        for s in l[_n]:
                t = 0
                while t < _n:
                        if l[t].__contains__(s):
                                totalcount-=1
                                print s
                                print 'found in ',l[t]
                                break
                        t+= 1
        _n += 1
print l
print totalcount
