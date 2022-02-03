from functools import lru_cache

def moves(h):
    a, b = h
    return (a+2, b), (a, b+2), (a*2, b), (a, b*2)
@lru_cache(None)

def f(h):
    if sum(h) >= 80:
        return "SR"
    if any(f(m) == "SR" for m in moves(h)):
        return "P1"
    if all(f(m) == "P1" for m in moves(h)):
        return "B1"
    if any(f(m) == "B1" for m in moves(h)):
        return "P2"
    if all(f(m) == "P1" or f(m) == "P2" for m in moves(h)):
        return "B1/B2"
# 37..72 -- P1
# 36 -- B1
# 18, 32, 34, 35 -- P2
# 30, 33 -- B1/B2
for s in range(1, 73):
    if f((7, s)) == "P1":
        print(s, f((7, s)))
print("#"*20)

for s in range(1, 73):
    if f((7, s)) == "B1":
        print(s, f((7, s)))
print("#"*20)

for s in range(1, 73):
    if f((7, s)) == "P2":
        print(s, f((7, s)))
print("#"*20)

for s in range(1, 73):
    if f((7, s)) == "B1/B2":
        print(s, f((7, s)))
print("#"*20)