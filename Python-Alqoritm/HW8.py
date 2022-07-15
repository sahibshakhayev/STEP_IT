#Task1
start = int(input("Enter start of range: "))
end = int(input("Enter end of range: "))
for i in  range(start, end + 1):
    if (i % 7 == 0):
        print(i)

print("\n")
#Task2
start = int(input("Enter start of range: "))
end = int(input("Enter end of range: "))
#1
start1 = start
end1 = end
print("All numbers in range: ")
for i in range(start1, end1+1):
    print(i)
print("\n")
#2
start2 = start
end2 = end
print("All numbers in range reverse: ")
for i in range(end2, start2-1, -1):
    print(i)

print("\n")
#3
start3 = start
end3 = end
print("Multiples of 7: ")
for i in range(start3, end3+1):
    if (i % 7 == 0):
        print(i)

print("\n")
#4
start4 = start
end4 = end
cout = 0

for i in range(start4, end4+1):
    if (i % 5 == 0):
        cout = cout + 1
print("The number of multiples of 5: " + str(cout))
print("\n")
#Task3
start = int(input("Enter start of range: "))
end = int(input("Enter end of range: "))

for i in range(start, end+1):
    if(i % 3 == 0 and i % 5 == 0):
        print("Fizz Buzz")
    elif (i % 3 == 0):
        print("Fizz")
    elif (i % 5 == 0):
        print("Buzz")
    else:
        print(i)