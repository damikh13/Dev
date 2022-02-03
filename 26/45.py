File = open(r"C:\Users\damikh13\Desktop\26data\26-45.txt", "r")
S = File.readlines()
n = int(S[0])

even = list()
odd = list()

for i in range(1, len(S)):
    x = int(S[i])
    if x % 2 == 0:
        even.append(x)
    else:
        odd.append(x)

even = sorted(even)
odd = sorted(odd)

def contains(lst, x):
    if x > lst[-1]:
        return False
    l = 0
    r = len(lst)
    while l < r:
        mid = (l + r) // 2
        if x > lst[mid]:
            l = mid + 1
        else:
            r = mid
    if lst[r] == x:
        return True
    else:
        return False

avg_max = -1
cnt = 0
for i in range(len(even) - 1):
    for j in range(i + 1, len(even)):
        x = even[i]
        y = even[j]
        avg = (x + y) // 2
        if contains(even, avg) or contains(odd, avg):
            avg_max = max(avg_max, avg)
            cnt += 1

for i in range(len(odd) - 1):
    for j in range(i + 1, len(odd)):
        x = odd[i]
        y = odd[j]
        avg = (x + y) // 2
        if contains(even, avg) or contains(odd, avg):
            avg_max = max(avg_max, avg)
            cnt += 1

print(cnt, avg_max)