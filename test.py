alph = set("ВОРОБЕЙ")

cnt = 0
for a in alph:
    for b in alph:
        for c in alph:
            for d in alph:
                for e in alph:
                    s = a+b+c+d+e
                    if s.count("Й") <= 1 and s[0] != "Й" and s[-1] != "Й" and "ЙЕ" not in s and "ЕЙ" not in s:
                        cnt += 1

print(cnt)