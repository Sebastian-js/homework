# 
# Ex-38_Page-142.py
# Created by Sebastian Jusca on 17/04/2023.
#

teamName = str(input("Your team's name is "))
wonGames = int(input("Enter how many games your team won: "))
evenGames = int(input("Enter how many games your team even: "))

points = evenGames + wonGames*3

print('For won games your team got 3 points, for the even ones just 1 point.')
print('Your team {} received {} points in total.'.format(teamName, points))