def hackerrankInString(s):
    checker = "hackerrank"
    checker = list(checker)
    j = 0
    for i in range(len(s)):
        # print(checker[j])
        if j < 10 and checker[j] == s[i]:
            j += 1
    # print(j)
    if j == 10:
        print("YES")
    else:
        print("NO")


n = int(input())
for i in range(n):
    s = input()
    hackerrankInString(s)

