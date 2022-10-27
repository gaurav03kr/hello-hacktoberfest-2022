print('this is a number game , you have to guess the number chosen by me ')
print('you will have 5 chances , else you will be out ')
print('enter a number between 1 to 20 ')
guess=0
num=1
while(num!=13):
    num=int(input())
    if(num<1 or num>20):
        print('invalid number entered ')
        guess=guess+1
    elif(num>0 and num<6):
        print('too small, try again!')
        guess=guess+1
    elif(num<11 and num>5):
        print('a lil smaller, try again!')
        guess=guess+1
    elif(num==11 or num==12 or num==14 or num==15 ):
        print('too close , try again!')
        guess=guess+1
    elif(num>15 and num<21):
        print('greater number taken, try again!')
        guess=guess+1
    elif(num==13):
        print('congrats!!!')
    if(guess==5):
        print('your guesses are over')
