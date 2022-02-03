def f(N):
    N -= (N % 8)
    bin_n = bin(N)[2:]
    s = 0
    for num in bin_n:
        s += int(num)
    if s % 2 == 0:
        bin_n = bin_n + "00"
    else:
        bin_n = bin_n + "01"
    return int(bin_n, 2)

for n in range(1, 100):
    if f(n) < 353:
        print(n)