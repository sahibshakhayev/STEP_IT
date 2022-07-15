#Task1
for i in range(1,11):
    for j in range(1,11):
        print(j*i, end="\t\t")
    print()
print("\n")
#Task2
size = 11
for i in range(size):
    for j in range(i + 1):
        print("*", end=' ')
    print()
print("\n")
#Task3
size = 21
for i in range(size):
    for j in  range(size):
        if i == 0 or j == 0 or i == size - 1 or j == size - 1:
            print("*", end=" ")
        elif (i == size // 4 and j < size // 4) or (j == size // 4 and i <= size // 4):
            print("*", end=" ")
        elif (i == size // 4 and j > size // 2 + size // 4) or (j == size // 2 + size // 4 and i <= size // 4):
            print("*", end=" ")
        elif (i == size // 2 + size // 4 and j < size // 4) or  (j == size // 4 and i >= size // 2 + size // 4):
            print("*", end=" ")
        elif (i == size // 2 + size // 4 and j > size // 2 + size // 4) or (j == size // 2 + size // 4 and i >= size // 2 + size // 4):
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()
print("\n")
#Task4
size = 21
for i in range(size):
    for j in  range(size):
        if i == 0 or j == 0 or i == size - 1 or j == size - 1:
            print("*", end=" ")
        elif (i <= size // 4 and j < size // 4) or (j == size // 4 and i <= size // 4):
            print("*", end=" ")
        elif (i <= size // 4 and j > size // 2 + size // 4) or (j == size // 2 + size // 4 and i <= size // 4):
            print("*", end=" ")
        elif (i >= size // 2 + size // 4 and j < size // 4) or  (j == size // 4 and i >= size // 2 + size // 4):
            print("*", end=" ")
        elif  (i >= size // 2 + size // 4 and j > size // 2 + size // 4) or (j == size // 2 + size // 4 and i >= size // 2 + size // 4):
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()
print("\n")
#Task5
num = 6
for i in range(num + 1):
    for j in range(i):
        print(i, end=" ")

    print()
print("\n")
#Task6
num = 44
for i in range(1, int(num/10)+1):
    for j in range (1, int(num/10)+1):
        print(i*10+j, end=" ")
    print()
print("\n")
#Task7
num = 16
print_num = 1
for i in range(1, num//4+1):
    for j in range (1, num//4+1):
        if (print_num <= num):
            print(print_num, end="\t")
            print_num += 1
    print()

