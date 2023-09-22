# 
# Ex-52_Teams.py
# Created by Sebastian Jusca on 17/04/2023.
#
while True:
	try:
		h, mn, s = input("Enter your time in format h.min.s: ").split('.')
		break
	except ValueError:
		print('Enter three numbers with a colon between.')
sc = int(h)*3600 + int(mn)*60 + int(s)

print('{}h {}min {}s are {} seconds in total.'.format(h, mn, s, sc))