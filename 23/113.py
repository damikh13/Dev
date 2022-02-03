from functools import lru_cache

mi = 10**5
@lru_cache(None)
def f(x, t, depth):
    if x > t:
        return 0
    if x == t:
        global mi
        mi = min(depth, mi)
        return 1
    return f(x + 1, t, depth + 1) + f(x + 5, t, depth + 1) + f(x * 3, t, depth + 1)

print(f(1, 227, 0))
print(mi)