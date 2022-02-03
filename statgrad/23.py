def f(x, t):
    if x == t:
        return 1
    if x > t:
        return 0
    return f(x + 1, t) + f(x * 3, t)

print(f(2, 26) + f(26, 87))