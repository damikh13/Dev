from functools import lru_cache

mi = 10 ** 5
@lru_cache(None)
def f(x, t, depth):
    if x > t:
        return 0
    if x == t and depth == 5:
        # global mi
        # mi = min(mi, depth)
        return 1
    return f(x + 1, t, depth + 1) + f(x + 2, t, depth + 1) + f(x * 2, t, depth + 1)
# f(1, 28, 0)
print(f(1, 28, 0))
# print(mi)