alph = ["1", "2", "3", "4", "5", "6", "7", "8","9"]

cnt = 0

for a in alph:
    for b in alph:
        for c in alph:
            for d in alph:
                for e in alph:
                    for f in alph:
                        s = a + b + c + d + e + f
                        if s[0] != "5" and s.count("2") == 2:
                            cnt += 1
                            print(s)
                            
print(cnt)