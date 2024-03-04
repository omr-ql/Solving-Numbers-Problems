r = int(input("Enter the rows = "))
c = int(input("Enter the columns = "))

for i in range(r) :
    for j in range(c) :
        value = int(input("Value = "))
print("Sum of rows = ",(r*c))
print("Sum of rows = ", value+(c**2))