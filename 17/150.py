File = open(r"C:\Users\damikh13\Desktop\17data\17-1.txt", "r")
s = File.readlines()

for i in range(len(s)):
    s[i] = int(s[i][:-1])

cnt = 0
mi_sum = 20001
for i in range(len(s) - 1):
    a = s[i]
    b = s[i + 1]
    if (a % 7 == 0 and b % 17 != 0) or (b % 7 == 0 and a % 17 != 0):
        cnt += 1
        mi_sum = min(a + b, mi_sum)

print(cnt, mi_sum)