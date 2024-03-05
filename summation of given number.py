def summation () :
    num = int(input("Enter your number = "))
    counter = 0
    for i in range (1, num + 1 ) :
        counter += i
    return counter

print(summation())