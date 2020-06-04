def hackerrankInString(s):
    s = list(s)
    checker = "hackerrank"
    checker = list(checker)
    dup = ""
    for i in range(len(s)):
        if s[i] in checker:
            dup += s[i]
    dup = list(dup)
    dup.sort()
    checker.sort()
    res = list(filter(lambda x: x in dup, checker))
    if len(res) == 10:
        return "YES"
    else:
        return "NO"

if __name__ == '__main__':
    q = int(input())

    for q_itr in range(q):
        s = input()
        print(hackerrankInString(s))
