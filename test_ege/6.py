cnt = 0
for x in range(1, 1000):
    s = 5 * (x // 10)
    n = 1
    while s < 300:
        s = s + 28
        n = n * 3
    if n == 243:
        cnt += 1
    
print(cnt)