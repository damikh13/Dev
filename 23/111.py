def f(x, target):
    if x == 11 or x == 18 or x > target:
        return 0
    if x == target:
        return 1
    return f(x + 1, target) + f(x + 2, target) + f(x * 3, target)
print(f(4, 8) * f(8, 23))