#Task1
start = int(input("Enter start of range: "))
end = int(input("Enter end of range: "))
while (start <= end):
    if (start % 7 == 0):
        print(start)
    start = start + 1
print("\n")
#Task2
start = int(input("Enter start of range: "))
end = int(input("Enter end of range: "))
#1
start1 = start
end1 = end
print("All numbers in range: ")
while (start1 <= end1):
    print(start1)
    start1 = start1 + 1
print("\n")
#2
start2 = start
end2 = end
print("All numbers in range reverse: ")
while (end2 >= start2):
    print(end2)
    end2 = end2 - 1
print("\n")
#3
start3 = start
end3 = end
print("Multiples of 7: ")
while (start3 <= end3):
    if (start3 % 7 == 0):
        print(start3)
    start3 = start3 + 1
print("\n")
#4
start4 = start
end4 = end
cout = 0

while (start4 <= end4):
    if (start4 % 5 == 0):
        cout = cout + 1
    start4 = start4 + 1
print("The number of multiples of 5: " + str(cout))
print("\n")
#Task3
start = int(input("Enter start of range: "))
end = int(input("Enter end of range: "))

while(start <= end):
    if(start % 3 == 0 and start % 5 == 0):
        print("Fizz Buzz")
    elif (start % 3 == 0):
        print("Fizz")
    elif (start % 5 == 0):
        print("Buzz")
    else:
        print(start)
    start = start + 1