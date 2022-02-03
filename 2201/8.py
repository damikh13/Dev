alph = "MARINA"

ans = set()

cnt = 0
for a in alph:
    for b in alph:
        for c in alph:
            for d in alph:
                for e in alph:
                    for f in alph:
                        s = a + b + c + d + e + f
                        if s.count("M") == 1:
                            if s.count("A") == 2:
                                if s.count("R") == 1:
                                    if s.count("I") == 1:
                                        if s.count("N") == 1:
                                            if s[0] != "A" and s[0] != "I":
                                                ans.add(s)
for word in ans:
    if word == "MARINA":
        print(word)

print(len(ans))