list = [0, 1]

x = input()
x = int(x);

for i in range(2, x):
    list.append(list[i - 1] + list[i - 2])

for i in range(x):
    if i < x-1:
        print(list[i], end=" ")
    else:
        print(list[i])
