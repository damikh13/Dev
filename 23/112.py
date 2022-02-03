def f(x, t):
    if x == t:
        return 1
    if x > t or x == 13 or x == 15:
        return 0
    return f(x + 1, t) + f(x + 2, t) + f(x * 3, t)

print(f(5, 11) * f(11, 26)) # 1157