def alg(N):
    N = str(N)
    s1 = 0
    s2 = 0
    for num in N:
        num = int(num)
        if num % 2 == 0:
            s1 += num
    for i in range(0, len(N)):
        if i % 2 == 0:
            s2 += int(N[i])
    return abs(s1 - s2)

for N in range(1, 2000000):
    if alg(N) == 28:
        print(N) # 1090909
        break