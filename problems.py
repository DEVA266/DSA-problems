def add():
    a=int(input("enter no 1: "))
    b=int(input("enter no 2: "))
    sum=a+b
    print(f"sum of {a} and {b} is : {sum}")

def div():
    a=float(input("enter the number : "))
    b=float(input("enter the number 2 :"))
    div_result=a/b
    print(f"{a} divided by {b} is : {div_result}")

#area of the triangle
def area_triangle():
    base = float(input("enter the base of the triangle : "))
    height = float(input("enter the height of the triangle : "))
    area = 0.5 * base * height 
    print(f"the area of the triangle with the base {base} and height {height} is {area}")

#swaping two variables
def swap_temp():
    a = float(input("enter the no1 : "))
    b = float(input("enter no2 : "))
    print(f"the numbers before swapping \n a is {a} \n b is {b}")
    temp = a
    a=b
    b=temp
    print(f"the numbers after swapping \n a is {a} \n b is {b}")

#generate random number 
def random_num():
    import random
    print(f"random number : {random.randint(1,100)}")

#kilometer to miles
def miles():
    kilo = float(input("enter the kilometer : "))
    miles = kilo * 0.621371
    print(f"{kilo} kilometers = {miles} miles")

# celcius to fahrenheit
def fahrenheit():
    cel = float(input("enter the celsius : "))
    fah = (cel * 9/5) + 32
    print(f"{cel} celsius = {fah} fahrenheit")

#fahrenheit to celsius
def celsius():
    fahrenheit = float(input("enter the fahrenheit : "))
    cel = (fahrenheit - 32) * 5/9
    print(f"{fahrenheit} fahrenheit = {cel} celsius")

# display calender 
def calender():
    import calendar
    year = int(input("enter year : "))
    month = int(input("enter month : "))
    date = calendar.month(year,month)
    print(date)

#to find the roots of the given quartic equations
def eq():
    import math
    a = float(input("enter the coefficient a : "))
    b = float(input("enter the coefficient b : "))
    c = float(input("enter the coefficient c : "))

    dis = (-b + (b**2 - 4*a*c)) / (2*a)

    if dis>0:
        print("Real Roots")
        root1=(-b + math.sqrt(dis)) / (2*a)
        root2=(-b - math.sqrt(dis)) / (2*a)
        print(f"Root 1 : {root1} \n Root 2 : {root2}")
    elif dis==0:
        print("one real root (repeated)")
        root = -b / (2*a)
        print(f"Root : {root}")
    else :
        print("complex roots ")
        real = -b / (2*a)
        imag = (math.sqrt(abs(dis))) / (2*a)
        print(f"Root 1 : {real} + {imag}i \n Root 2 : {real} - {imag}i")

def swap():
    a=int(input("enter no "))
    b=int(input("enter no :"))
    print("the numbers before swapping \n a is {} \n b is {}".format(a,b))
    a,b=b,a
    print("the numbers after swapping \n a is {} \n b is {}".format(a,b))

# check positive negative or zero
def pos():
    n=int(input("enter the number : "))
    if n>0 :
        print("the number is positive")
    elif n<0 :
        print("the number is negative")
    else :
        print("the number is zero")

#odd or even
def odd_even():
    n=int(input("enter the number : "))
    if n%2==0 :
        print("the number is even")
    else :
        print("the number is odd")

def leap_year1():
    year=int(input("enter the year : "))
    if(year%4 == 0):
        if(year%100 == 0):
            if(year%400 == 0):
                print("{} is a leap year",format(year))
            else :
                print("{} is not a leap year",format(year))
        else :
            print("{} is a leap year",format(year))
    else :
        print("{} is not a leap year",format(year))

def leap_year2():
    year=int(input("enter the year : "))
    if(year%400==0):
        print("{} is a leap year",format(year))
    elif(year%4==0 and year%100 != 0):
        print("{} is a leap year",format(year))
    else :
        print("{} is not a leap year",format(year))

def prime_number():
    num = int(input("enter a number :"))
    flag = False
    if num == 1 :
        print(f"{num} is not a prime number")
    elif num > 1:
        for i in range(2,int(num/2)):
            if(num%i) == 0:
                flag = True
                break
    if flag :
        print(f"{num} is not a prime number")
    else:
        print(f"{num} is a prime number")

def problem16():
    n = int(input("enter the number : "))
    fact = 1
    if n==0 or n==1 :
        fact = 1
        print(f"the factorial of {n} is {fact}")
    elif n < 0 :
        print(f"the factorial of negative number does not exist")
    else :
        for i in range(1,n+1):
            fact = fact*i
        print(f"the factorial of the number {n} is {fact}")
    
def problem17():
    n = int(input("Display the multiplication table of : "))
    for i in range(1,11):
        print(f"{n} X {i} = {n*i}")

def problem18():
    n = int(input("enter the number of terms : "))
    a,b=0,1
    if n<0 :
        print("enter a positive number : ")
    elif n==1:
        print("the fibonacci sequences is :",a)
    else :
        print("Fibonacci Sequences :")
        while(n>0):
            print(a)
            c = a+b
            a=b
            b=c
            n -=1

def problem19():
    # armstrong number 
    n = int(input("enter the number : "))
    digits = len(str(n))
    temp = n
    sum = 0
    while(temp > 0):
        last = temp%10
        sum += last**digits
        temp = temp//10
    if sum == n:
        print(f"{n} is an Armstrong number.")
    else:
        print(f"{n} is not an Armstrong number.")

def problem20():
    start = int(input("starting range : "))
    end = int(input("enter the end range : "))
    numbers = []
    for n in range(start,end+1):
        digits = len(str(n))
        temp = n
        sum = 0
        while(temp > 0):
            last = temp%10
            sum += last**digits
            temp = temp//10
        if sum == n :
            numbers.append(n)
    print(f"Armstrong numbers between the interval {start} and {end} is : ",numbers)

def problem21():
    n = int(input("enter the limit : "))
    s = 0
    for i in range(1,n+1):
        sum += i
    print(f"The Sum of first {n} natural numbers is : {sum}")

def problem22():
    n1 = int(input("enter the number : "))
    n2 = int(input("enter the number : "))
    small = 0
    if n1<n2:
        small = n1
    elif n1>n2:
        small = n2
    for x in range(small,1,-1):
        if ((n1%x==0) and (n2%x==0)):
            hcf = x
            print(f"The Highest Common Factor [HCF] of {n1} and {n2} is : {hcf}")
            break 

problem22()

## problem 21 Lcm need to be finished that is still incompleted
    
