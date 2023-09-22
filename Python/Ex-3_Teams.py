# 
# Ex-3_Teams.py
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
	