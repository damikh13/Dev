def f(N):
    bin_N = bin(N)[2:]
    if N % 2 != 0:
        bin_N = "1" + bin_N + "0"
    else:
        bin_N = "11" + bin_N + "11"
    return int(bin_N, 2)

ans = []
for i in range(1, 1000):
    if f(i) < 126:
        print(i, f(i))
        ans.append(f(i))

print(max(ans))