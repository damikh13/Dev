# 260
def idx_of_last_null(bin_N):
    last_idx = -1
    for i in range(len(bin_N)):
        if bin_N[i] == "0":
            last_idx = i
    return last_idx

def alg(N):
    bin_N = bin(N)[2:]
    last_null_idx = idx_of_last_null(bin_N)
    if last_null_idx == -1:
        return -1
    bin_N = bin_N[:last_null_idx] + bin_N[:2] + bin_N[last_null_idx + 1:] 
    bin_N = bin_N[::-1]
    return int(bin_N, 2)

for N in range(2, 100):
    if alg(N) == 123:
        print(N, alg(N))