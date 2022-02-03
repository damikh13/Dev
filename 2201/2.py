def f(a, b, c, d):
    return ((not a) <= b) and (b != c) and (not d)

val = [0, 1]
print("a", "b", "c", "d")
for a in val:
    for b in val:
        for c in val:
            for d in val:
                if f(a, b, c, d) == True:
                    print(a, b, c, d)