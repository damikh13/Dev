def alg(N):
    if N % 3 == 0:
        N //= 3
    else:
        N -= 1
    

    if N % 5 == 0:
        N //= 5
    else:
        N -= 1


    if N % 11 == 0:
        N //= 11
    else:
        N -= 1

    return N

cnt = 0
for N in range(2, 100000):
    if alg(N) == 8:
        print(N)
        cnt += 1

print(cnt)