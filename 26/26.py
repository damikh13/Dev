File = open(r"C:\Users\damikh13\Desktop\26data\26-j1.txt", "r")
s = File.readlines()

for i in range(len(s)):
    s[i] = int(s[i][:-1])

n = s[0]
for i in range(n):
    el = s[i]
    for j in range(n):
        if i != j: