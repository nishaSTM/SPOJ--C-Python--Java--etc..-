# a = 1
# b = 2
# c = 1
# d = 2

# quad area based on Brahmagupta's formula : http://en.wikipedia.org/wiki/Brahmagupta's_formula

import math

a = input()
b = input()
c = input()
d = input()

s = (a+b+c+d) / 2.0000

s = (s-a)*(s-b)*(s-c)*(s-d)

s = math.sqrt(s)

print "%.2f" % s
