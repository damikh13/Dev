from functools import lru_cache

def moves(h):
    a, b = h
    return (a + 1, b), (a, b + 1), (a + 2, b), (a, b + 2)
@lru_cache(None)

def f(h):
    if sum(h) == 13:
        return "SRAZY"
    if any(f(m) == "SRAZY" for m in moves(h)):
        return "P1"
    if all(f(m) == "P1" for m in moves(h)):
        return "B1"
    if any(f(m) == "B1" for m in moves(h)):
        return "P2"
    if all(f(m) == "P2" for m in moves(h)):
        return "B2"

print("#"*69)
for s in range(1, 10):
    if f((3, s)) == "P2":
        print(s)
print("#"*69)

for s in range(1, 10):
    if f((3, s)) == "B2":
        print(s)
print("#"*69)