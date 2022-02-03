from functools import lru_cache

def moves(h):
    a, b = h
@lru_cache(None)

def f(h):
    if 33 <= h <= 89:
        return "SRAZY"
    if h > 89:
        return "P1"
    if any(f(m) == "SRAZY" for m in moves(h)):
        return "P1"
    if all(f(m) == "P1" for m in moves(h)):
        return "B1"
    if any(f(m) == "B1" for m in moves(h)):
        return "P2"
    if all(f(m) == "P1" or f(m) == "P2" for m in moves(h)):
        return "B1/B2"
# 11..29, 32 P1
# 29 P1
# 30 P2
# 31 B1

# B1/B2 -- 10
for s in range(1, 33):
    if f(s) == "B1/B2":
        print(s)