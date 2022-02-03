alph = "АРСЕНИЙ"
vowels = "АЕИ"
def count_vowels(s):
    cnt = 0
    for ch in s:
        if ch in vowels:
            cnt += 1
    return cnt
cnt = 0
for a in alph:
    for b in alph:
        for c in alph:
            for d in alph:
                s = a+b+c+d
                if s[0] != "Й" and count_vowels(s) >= 1:
                    cnt += 1
print(cnt) # 1866