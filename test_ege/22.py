for N in range(1, 10000):
    N_copy = N
    c = 0
    T = 3
    d = 3
    cnt = 0
    while N != 0:
        N = N - T
        T = T + d
        c = c + 1
        cnt += 1
        if cnt >= 100:
            break
    if c % 2 == 0:
        c = c + d
    if c == 9:
        print(N_copy)