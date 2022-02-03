def all_digits_are_different(num):
    return len(set(num)) == len(num)
def not_close(num):
    for i in range(1, len(num)):
        if (hex_to_dec[num[i]] % 2) == (hex_to_dec[num[i - 1]] % 2):
            return False
    return True
hex_to_dec = dict()
for i in range(16):
    if i < 10:
        hex_to_dec[str(i)] = i
    else:
        if i == 10:
            hex_to_dec['a'] = i
        elif i == 11:
            hex_to_dec['b'] = i
        elif i == 12:
            hex_to_dec['c'] = i
        elif i == 13:
            hex_to_dec['d'] = i
        elif i == 14:
            hex_to_dec['e'] = i
        elif i == 15:
            hex_to_dec['f'] = i
cnt = 0
for i in range(16 ** 3, 16 ** 4):
    hex_i = hex(i)[2:]
    if not_close(hex_i) and all_digits_are_different(hex_i):
        cnt += 1
print(cnt) # 5880