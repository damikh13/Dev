from functools import lru_cache

def moves(h):
    return h + 1, h * 3

@lru_cache

def f(h):
    if 36 <= h <= 98:
        return "SRAZY"
    if h > 98:
        return "P1"
    if any(f(m) == "SRAZY" for m in moves(h)):
        return "P1"
    if all(f(m) == "P1" for m in moves(h)):
        return "B1"
    if any(f(m) == "B1" for m in moves(h)):
        return "P2" 
    if all(f(m) == "P1" or f(m) == "P2" for m in moves(h)):
        return "B1/B2" # # 11..32 -- P1 # for s in range(1, 36): #     if f(s) == "P1": #         print(s, f(s)) # print(f(32)) # P1 # print(f(33)) # P2 # print(f(34)) # B1 

# 12..32, 35 -- P1
for s in range(1, 36):
    if f(s) == "P1":
        print(s, f(s))

print("###########################")

for s in range(32, 35):
    print(s, f(s))

print("################################")
for s in range(9, 12):
    print(s, f(s))
    # 9 None, но так же ручками понимает, что побеждает Ваня
    # 10 None, но можно ручками понять, что P победит (сделав +1 и отправив ваню на проигрыш)
    # 11 B1/B2