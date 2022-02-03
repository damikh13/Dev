def f(N):
    new_n = bin(N)[2:]
    new_n = new_n + new_n[-2]
    new_n = new_n + new_n[1]
    return int(new_n, 2)

cnt = 0
for i in range(3, 10000):
    if 150 <= f(i) <= 200:
        cnt += 1
        print(i, f(i)) 

print(cnt)