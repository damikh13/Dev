def f(x, t):
    if x > t:
        return 0
    if x == t:
        return 1
    return f(x + 1, t) + f(x + 2, t) + f(x * 3, t)

print(f(2, 4) * f(4, 11) * f(11, 15))