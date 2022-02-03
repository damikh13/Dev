from functools import lru_cache

def moves(h):
    a, b = h

@lru_cache(None)

def f(h):
    if sum(h) <= 18:
        return "SRAZY"
    if any(f(m) == "SRAZY" for m in moves(h)):
        return "P1"
    if all(f(m) == "P1" for m in moves(h)):
        return "B1"
    if any(f(m) == "B1" for m in moves(h)):
        return "P2"
    if all(f(m) == "P1" or f(m) == "P2" for m in moves(h)):
        return "B1/B2"

for m in range(2, 100):
    if f((m, m)) == "B1":
        print(m, f((m, m)))