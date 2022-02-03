def all_digits_are_different(num):
    return len(set(str(num))) == len(str(num))
def not_close(num):
    num = str(num)
    for i in range(1, len(num)):
        if (int(num[i]) % 2) == (int(num[i - 1]) % 2):
            return False
    return True
cnt = 0
for i in range(8 ** 4, 8 ** 5):
    oct_i = oct(i)[2:]
    if not_close(oct_i) and all_digits_are_different(oct_i):
        cnt += 1
print(cnt) # 504