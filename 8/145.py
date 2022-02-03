alph = set("РАДУГА")
cons = "РДГ"
def count_cons(s):
    return s.count("Р") + s.count("Д") + s.count("Г")
cnt = 0
for a in alph:
    for b in alph:
        for c in alph:
            for d in alph:
                for e in alph:
                    for f in alph:
                        s = a+b+c+d+e+f
                        if count_cons(s) >= 3:
                            # print(s)
                            cnt += 1
print(cnt) # 12825