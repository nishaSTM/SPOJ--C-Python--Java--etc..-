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
 print i

r1('3i')
r1("5m2c3x4i")
r1("m2c4i")
r1('5m2c3x')
