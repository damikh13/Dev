def conv(n, b):
    new_n = ""
    while n > 0:
        new_n = str(n % b) + new_n
        n //= b
    return new_n

F = (3 * 64 ** 1073) - (2 * 16 ** 1131) + (4 ** 1173) - 484

F_conv = conv(F, 4)

cnt = dict()
for num in F_conv:
    if num not in cnt.keys():
        cnt[num] = 1
    else:
        cnt[num] += 1

print(cnt)
