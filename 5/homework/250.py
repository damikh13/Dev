def alg(N):
    bin_N = bin(N)[2:]
    bin_N = add_numbers(bin_N)
    bin_N = add_numbers(bin_N)
    bin_N = add_numbers(bin_N)
    return int(bin_N, 2)

def add_numbers(bin_N):
    cnt_0 = bin_N.count("0")
    cnt_1 = bin_N.count("1")
    if cnt_0 == cnt_1:
        bin_N = bin_N + bin_N[-1]
    else:
        if min(cnt_0, cnt_1) == cnt_0:
            bin_N = bin_N + "0"
        else:
            bin_N = bin_N + "1"
    return bin_N

for N in range(61, 200):
    res = alg(N)
    if res % 2 == 0 and res % 4 != 0:
        print(N, res) # 67 542
        break