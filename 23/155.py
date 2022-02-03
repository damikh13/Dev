def next_even(x):
    if x % 2 == 0:
        return x + 2
    return x + 1

def f(x, t):
    if x > t or x == 21:
        return 0
    if x == t:
        return 1
    return f(x + 1, t) + f(x + 4, t) + f(x + next_even(x), t)
print(f(2, 11) * f(11, 26))