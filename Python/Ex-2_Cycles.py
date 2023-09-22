#
#  Ex-2_Cycles.py
#  Exercise 2 about Cycles Explained on Microsoft Teams
#  efa88ea057e4b4532e1ac172e2a879ba7096fe7a
#
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