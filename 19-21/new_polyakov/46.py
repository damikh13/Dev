from functools import lru_cache

def moves(h):
    return h + 2, h * 3
@lru_cache(None)

def f(h):
    if 45 <= h <= 112:
        return "SRAZY"
    if h > 112:
        return "P1"
    if any(f(m) == "SRAZY" for m in moves(h)):
        return "P1"
    if all(f(m) == "P1" for m in moves(h)):
        return "B1"
    if any(f(m) == "B1" for m in moves(h)):
        return "P2"
    if all(f(m) == "P1" or f(m) == "P2" for m in moves(h)):
        return "B1/B2"

for s in range(1, 45):
    if f(s) == "B1":
        print(s)
print("#"*69)

for s in range(1, 45):
    if f(s) == "P2":
        print(s)
print("#"*69)

for s in range(1, 75):
    if f(s) == "B1/B2":
        print(s)