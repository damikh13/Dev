ans = []
for x in range(1, 1000):
    a = 1
    b = a
    while a < x:
        c = a + b
        a = b
        b = c
    if b == 55:
        ans.append(x)
print(min(ans))
