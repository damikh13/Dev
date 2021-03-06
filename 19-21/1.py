from functools import lru_cache

def moves(h):
    return (h + 2), (h * 2)

@lru_cache(None)

def f(h):
    if h >= 25:
        return "SRAZY"
    if any(f(m) == "SRAZY" for m in moves(h)):
        return "P1"
    if all(f(m) == "P1" for m in moves(h)):
        return "B1"
    if any(f(m) == "B1" for m in moves(h)):
        return "P2"
    if all(f(m) == "P1" or f(m) == "P2" for m in moves(h)):
        return "B1/B2"

for s in range(1, 25):
    if f(s) == "P1":
        print(s, f(s))
print("#"*30)

for s in range(1, 25):
    if f(s) == "B1":
        print(s, f(s))
print("#"*30)

for s in range(1, 25):
    if f(s) == "P2":
        print(s, f(s))
print("#"*30)

for s in range(1, 25):
    if f(s) == "B1/B2":
        print(s, f(s))