# 
# Ex-33_Page-142.py
# Created by Sebastian Jusca on 17/04/2023.
#

price = float(input('Enter your total: '))

if price < 100:
	discPrice = price * 0.5
elif price >= 200:
	discPrice = price * 0.15
else:
	discPrice = price * 0.1

price = price - discPrice

print('Your discounted price is {}'.format(price))