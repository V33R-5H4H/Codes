#Basic Python programs
#Python programs for Practical 15
#Write a program to check whether given number is prime or not.
#Ans -
n = int(input("Enter a number: "))
for n in range(10,20):
        for i in range(2,n):
            if n%i==0:
                j=n/i
                break
            else:
                print(n,"is a prime number")
#Write a program to check whether given number is odd or even.
#Ans -
num = int(input("Enter a number: "))
if (num % 2) == 0:
    print("Even number")
else:
    print("Odd number")
#Write a program for find factorial of a given number using iterative function.
#Ans -
num = int(input("Enter a number: "))
factorial = 1
# check if the number is negative, positive or zero
if num < 0:
    print("Sorry, factorial does not exist for negative numbers")
elif num == 0:
    print("The factorial of 0 is 1")
else:
    for i in range(1,num + 1):
        factorial = factorial*i
        print("The factorial of",num,"is",factorial)