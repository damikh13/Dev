File = open(r"C:\Users\damikh13\Desktop\24.txt", "r")
s = File.readline()

# s = "123123412345\n"

curr_len = 1
max_len = -1
for i in range(1, len(s) - 1):
    if int(s[i]) >= int(s[i - 1]):
        curr_len += 1
    else:
        max_len = max(max_len, curr_len)
        curr_len = 1

max_len = max(max_len, curr_len)
print(max_len)