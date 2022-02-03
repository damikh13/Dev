alph = ["up", "down", "left", "right"]
cnt = 0
for a in alph:
    for b in alph:
        for c in alph:
            for d in alph:
                s = [a, b, c, d]
                if s[0] != "up" and (s[1] != s[2]):
                    cnt += 1
                    print(s)
print(cnt) # 144