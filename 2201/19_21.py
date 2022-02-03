from functools import lru_cache

def f(h):
    a, b = h
    return (a + 1, b), (a, b + 1), (a + 2, b), (a, b + 2)

def f(h):
    if sum(h) == 13:
