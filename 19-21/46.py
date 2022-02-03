from functools import lru_cache

def moves(h):
    a, b = h
    return (a+1, b), (a, b+1), (a*2, b), (a, b*2)
@lru_cache(None)

def f(h):
    if sum(h) >= 70:
        return "SR"
    if any(f(m) == "SR" for m in moves(h)):
        return "P1"
    if all(f(m) == "P1" for m in moves(h)):
        return "B1"
    if any(f(m) == "B1" for m in moves(h)):
        return "P2"
    if all(f(m) == "P1" or f(m) == "P2" for m in moves(h)):
        return "B1/B2"

print(f((9, 29))) # P2
print(f((11, 28))) # p2, p2

print(f((10, 28))) # p2, p2, b1/b2
print(f((12, 27))) # p2, p2, b1/b2, b1/b2

print(f((10, 27))) # p2, p2, b1/b2, b1/b2, p1