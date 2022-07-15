# Task1
def formated_text():
    print("\n\t\t\t“Don't compare yourself with anyone in this world…\n\t\t\tif you do so,"
          " you are insulting yourself.”\n\n\t\t\t\t\t\t\t\t\t\t\t\tBill Gates")


formated_text()

print()


# Task2
def even_numbers(start, end):
    for i in range(start + 1, end):
        if i % 2 == 0:
            print(i, end=" ")


even_numbers(25, 97)
print()
print()


# Task3
def show_square(len, symbol, type):
    for i in range(len):
        for j in range(len):
            if type:
                if i == 0 or j == 0 or i <= len - 1 or j <= len - 1:
                    print(symbol, end=" ")
                else:
                    print(" ", end=" ")
            else:
                if i == 0 or j == 0 or i == len - 1 or j == len - 1:
                    print(symbol, end=" ")
                else:
                    print(" ", end=" ")
        print()


show_square(21, "*", True)
