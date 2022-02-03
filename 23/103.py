def f(x, t, cnt):
    if x == t and cnt == 6:
        return 1
    if x > t or cnt > 6:
        return 0
    return f(x + 1, t, cnt + 1) + f(x + 2, t, cnt + 1) + f(x * 2, t, cnt + 1)

print(f(1, 20, 0)) # 36