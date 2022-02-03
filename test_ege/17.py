File = open(r"C:\Users\damikh13\Downloads\17.txt", "r")
s = File.readlines()

for i in range(len(s)):
    s[i] = int(s[i][:-1])

cnt_odd = 0
cnt_even = 0
even_max = 0
odd_max = 0
even_min = 10001
for num in s:
    if num % 2 == 0:
        cnt_even += 1
        even_max = max(even_max, num)
        even_min = min(even_min, num)
    else:
        cnt_odd += 1
        odd_max = max(odd_max, num)
    

print(cnt_even, even_min)