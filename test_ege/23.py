def f(x, t):
    if x > t:
        return 0
    if x == t:
        return 1
    return f(x + 1, t) + f(x * 3, t)

print(f(1, 30), f(30, 50), f(50, 150))