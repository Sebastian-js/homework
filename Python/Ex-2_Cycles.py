#
#  Ex-2_Cycles.py
#  Created by Sebastian Jusca on 23/04/2023.
#

prime = True
n = int(input('Enter a number: '))
i = 2

while i < n and n != 0 and n != 1:
	if n % i == 0: 
		print('{} is not a prime number.\n'.format(n))
		break
	i += 1
if prime: print('{} is a prime number.\n'.format(n))