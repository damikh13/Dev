    cnts = list()
from functools import lru_cache

@lru_cache(None)
def f(x, t, cnt):
    if x == t:
        cnts.append(cnt)
        if cnt == 6:
            return 1
    if x > t or cnt > 6:
        return 0
    return f(x + 1, t, cnt + 1) + f(x + 5, t, cnt + 1) + f(x * 3, t, cnt + 1)

print(f(1, 111, 0)) # 5
print(min(cnts)) # 6