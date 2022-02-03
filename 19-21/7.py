from functools import lru_cache

def moves(h):
    return h+4, h*3

@lru_cache(None)
# стартует Петя
def f(h):
    if h >= 70:
        return "СР"
    # если хотя бы один ход ведёт нас к победе
    if any(f(m) == "СР" for m in moves(h)):
        return "P1"
    # если все ходы ведут к победе другого 
    if all(f(m) == "P1" for m in moves(h)):
        return "B1"
    # если хотя бы один ход ведёт к поражению другого
    if any(f(m) == "B1" for m in moves(h)):
        return "P2"
    # если 
    if all(f(m) == "P1" or f(m) == "P2" for m in moves(h)):
        return "B1/B2"

for s in range(1, 69 + 1):
    if f(s) == "P1":
        print(s, f(s))
print("#########################")
for s in range(1, 69 + 1):
    if f(s) == "B1":
        print(s, f(s))
print("#########################")
for s in range(1, 69 + 1):
    if f(s) == "P2":
        print(s, f(s))
print("#########################")
for s in range(1, 69 + 1):
    if f(s) == "B1/B2":
        print(s, f(s))