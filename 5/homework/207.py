def alg(N):
    bin_N = bin(N)[2:]
    sum_of_nums = bin_N.count("1")
    bin_N = bin_N + str(((sum_of_nums) % 2))
    sum_of_nums = bin_N.count("1")
    bin_N = bin_N + str(((sum_of_nums) % 2))
    return int(bin_N, 2)

cnt = 0
for N in range(1, 10000):
    if alg(N) < 100:
        print(N, alg(N))
        cnt += 1

print(cnt)