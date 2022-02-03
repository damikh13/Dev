def alg(N):
    # 1-й шаг
    if N % 3 == 0:
        N /= 3
    else:
        N -= 1

    # 2-й шаг
    if N % 7 == 0:
        N /= 7
    else:
        N -= 1

    # 3-й шаг
    if N % 11 == 0:
        N /= 11
    else:
        N -= 1

    return N

cnt = 0
for N in range(2, 10000):
    if alg(N) == 6:
        print(N, alg(N))
        cnt += 1

print(cnt)