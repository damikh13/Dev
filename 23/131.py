def f(x, t):
    if int(x, 2) > int(t, 2):
        return 0
    if x == t:
        return 1
    added_one_x = bin(int(x, 2) + 1)[2:]
    return f(added_one_x, t) + f(x + "0", t) + f(x + "1", t)
print(f("100", "11101"))