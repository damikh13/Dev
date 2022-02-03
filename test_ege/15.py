def P(x):
    return 10 <= x <= 45

def Q(x):
    return 35 <= x <= 78

def A(l, r, x):
    return l <= x <= r

otr = []
for l in range(1, 100):
    for r in range(l + 1, 1000):
        ok = 1
        for x in range(1, 100):
            F = (not (P(x)) <= (Q(x))) and not (A(l, r, x))
            if F == True:
                ok == 0
                break
        if ok:
            otr.append(r - l)

print(min(otr))