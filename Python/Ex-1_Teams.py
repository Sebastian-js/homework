# 
# Ex-1_Teams.py
# Exercise 1 Explained on Microsoft Teams
# 6722e70c9e0bc299b7dc9d50abbaf3178d77f4a2
#
# Created by Sebastian Jusca on 17/04/2023.
#

SUM = i = 0
print('Enter 15 numbers, it will display the sum of the odd ones\n')

while i < 15:
	n = int(input(''))
	if n % 2 != 0: SUM += n 
	i += 1

print(SUM)