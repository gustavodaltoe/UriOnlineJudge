n = input()
n = int(n)

for i in range(n - 1, 1, -1):
    n *= i

print(n)