def F(x, y, z, w):
    return (x and (not y)) or (y == z) or w

print("x y z w")
for x in range(0, 2):
    for y in range(0, 2):
        for z in range(0, 2):
            for w in range(0, 2):
                if F(x, y, z, w) == False:
                    print(x, y, z, w)