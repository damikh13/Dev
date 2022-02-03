def alg(N):
    N = str(N)
    a, b, c = [int(num) for num in N]
    mi = min(a, b, c)
    ma = max(a, b, c)
    avg = (a + b + c) - mi - ma
    max_num = int(str(ma) + str(avg))
    if mi != 0:
        min_num = int(str(mi) + str(avg))
    else:
        min_num = int(str(avg) + str(mi))
    return max_num - min_num

for N in range(100, 1000):
    if alg(N) == 63:
        print(N) # 309
        break