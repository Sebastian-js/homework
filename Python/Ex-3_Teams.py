# 
# Ex-3_Teams.py
# Exercise 3 Explained on Microsoft Teams
# a1127a1fdcff0d741792c01b00b66d7276536d14
#
# Created by Sebastian Jusca on 17/04/2023.
#

F0 = i = 0
F1 = 1

n = int(input(''))

while i < n:
	print(F0)
	Fn = F0 + F1
	F0 = F1
	F1 = Fn
	i += 1
	