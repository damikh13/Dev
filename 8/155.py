num = 1
alph = list("АИОУЭ")
for a in alph:
    for b in alph:
        for c in alph:
            for d in alph:
                for e in alph:
                    for f in alph:
                        s = a+b+c+d+e+f
                        if s[0] == "О" and s[-1] == "О":
                            print(num, s)
                        num += 1
print(9373)