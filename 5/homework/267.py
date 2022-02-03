def alg(N):
    bin_N = bin(N)[2:]
    inverted = bin_N[0]
    for i in range(1, len(bin_N)):
        if bin_N[i] == "1":
            inverted += "0"
        else:
            inverted += "1"
    return int(inverted, 2) + N
for N in range(1, 100, 2):
    if alg(N) > 99:
        print(N) # 65
        break