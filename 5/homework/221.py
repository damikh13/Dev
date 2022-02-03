def alg(N):
    a, b, c = [int(i) for i in str(N)]
    ma = max(a, b, c)
    mi = min(a, b, c)
    avg = (a + b + c) - ma - mi
    
    max_num = int(str(ma) + str(avg))
    if mi == 0:
        min_num = int(str(avg) + str(mi))
    else:
        min_num = int(str(mi) + str(avg))

    return max_num - min_num

cnt = 0
for N in range(900, 1000):
    if alg(N) == 70:
        print(N)
        cnt += 1

print(cnt)