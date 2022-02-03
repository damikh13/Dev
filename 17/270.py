File = open(r"C:\Users\damikh13\Desktop\17data\17-243.txt", "r")
s = File.readlines()

for i in range(len(s)):
    s[i] = int(s[i][:-1])

# sum of digits of all numbers in the file
sum_of_nums = 0
for i in range(len(s)):
    num = s[i]
    if num % 35 == 0:
        num = str(num)
        for digit in num:
            sum_of_nums += int(digit)

cnt = 0
mn = 20001
for i in range(len(s) - 1):
    a = s[i]
    b = s[i + 1]
    if (a > sum_of_nums and hex(b)[:-3:-1][::-1] == "ef" and b < sum_of_nums) or (b > sum_of_nums and a < sum_of_nums and hex(a)[:-3:-1][::-1] == "ef"):
        mn = min(mn, a + b)
        cnt += 1

print(cnt, mn)