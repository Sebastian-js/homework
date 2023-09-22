#
#  Ex-1_Cycles.py
#  Created by Sebastian Jusca on 23/04/2023.
#

while True:
	try: 
		b, n = input('Enter expression: ').split('^')
		break
	except ValueError:
		print('Enter two numbers with a "^" between.')

i = res = 1

while i <= int(n):
  res *= int(b);
  i += 1
print('The result is {}\n'.format(res))


