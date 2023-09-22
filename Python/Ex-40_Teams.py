# 
# Ex-40_Teams.py
# Created by Sebastian Jusca on 17/04/2023.
#

year = int(input('Enter your year: '))

if year % 4 != 0:
	print('The year {} is not a leap year.'.format(year))
elif year % 100 == 0 and year % 400 != 0:
	print('The year {} is not a leap year.'.format(year))
else:
	print('The year {} is a leap year'.format(year))

