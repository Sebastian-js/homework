# 
# Ex-2_Teams.py
# Exercise 2 Explained on Microsoft Teams
# 89391d847b262a7e47aa3d15a65e32a77220c955
#
# Created by Sebastian Jusca on 17/04/2023.
#

month = int(input('Enter the number of the month: '))
if month < 8:
	if month % 2 == 1: days = 31
	elif month == 2: days = 28
	else: days = 30
else:
	if month % 2 == 0: days = 31
	else: days = 30

print('Your month has {} days'.format(days))