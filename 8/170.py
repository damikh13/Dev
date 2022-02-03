alph = set("жалей")
print(alph)
cnt = 0
for a in alph:
    for b in alph:
        for c in alph:
            for d in alph:
                for e in alph:
                    s = a+b+c+d+e
                    if (s.count('й') <= 1) and (s[0] != 'й') and (s[-1] != 'й') and ("ей" not in s) and ("йе" not in s):
                        cnt += 1
                        print(s)
print(cnt) # 1456