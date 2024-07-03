n, n1, n2 = map(int, input().split())

if n >= n1 and n >= n2:
    print(n, "eh o maior")
elif n1 >= n and n1 >= n2:
    print(n1, "eh o maior")
else:
    print(n2, "eh o maior")
