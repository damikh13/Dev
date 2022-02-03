def ok(s):
    vowels = "АИ"
    if s[0] == "Ь":
        return False
    else:
        for i in range(len(s)):
            if s[i] == "Ь" and s[i - 1] in vowels:
                return False
    return True

cnt = 0
for permutation in list(permutations(alph)):
    s = ''.join(permutation)
    if ok(s):
        cnt += 1

print(cnt)