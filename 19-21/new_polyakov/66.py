from functools import lru_cache

def moves(h):
    a, b = h
    return (a + 1, b), (a, b + 1), (a + b, b), (a, b + a)

@lru_cache(None)

def f(h):
    if sum(h) >= 81:
        return "SRAZY"
    if any(f(m) == "SRAZY" for m in moves(h)):
        return "P1"
    if all(f(m) == "P1" for m in moves(h)):
        return "B1"
    if any(f(m) == "B1" for m in moves(h)):
        return "P2"
    if all(f(m) == "P1" or f(m) == "P2" for m in moves(h)):
        return "B1/B2"

for s in range(1, 74):
    if f((7, s)) == "P2":
        print(s)
print("#"*69)

for s in range(1, 74):
    if f((7, s)) == "B1/B2":
        print(s)