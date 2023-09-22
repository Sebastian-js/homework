# 
# Ex-4_Teams.py
# Exercise 4 Explained on Microsoft Teams
# 092deffd61e53b1424279e9c11a564539ed4918b
#
# Created by Sebastian Jusca on 17/04/2023.
#

n = int(input('Enter the number of people: '))
i = SUM = high = 0
ppl = [1]

while i < n:
	i += 1
	ppl.append(int(input('Enter the height of the person: ')))
	
	SUM += ppl[i]
	if ppl[i] > 1.8: high += 1
	

SUM = SUM / n 

print('The average height is {} meters.'.format(SUM))
print('{} people are taller than 1.8 meters'.format(high))