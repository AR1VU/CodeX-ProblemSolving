# Format (Mark: 90%)
n = int(input("Number of Students [Format (Mark: 90%)]: "))
ls = []

for i in range(0, n):

    x, y = input("Name and Percentage: ").split()

    ls.append((y, x))

ls = sorted(ls, reverse=True)

for i in ls:
    print(i[1], i[0])
