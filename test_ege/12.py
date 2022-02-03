def f(s):
    while "111" in s or "88888" in s:
        if "111" in s:
            s = s.replace("111", "88")
        else:
            s = s.replace("88888", "8")
    return s

ma_8 = -1
mi_i = -1
for i in range(100, 1000):
    s = "1"*i
    s_new = f(s)
    cnt_8 = s_new.count("8")
    if cnt_8 > ma_8:
        ma_8 = cnt_8
        mi_i = i

print(mi_i)


