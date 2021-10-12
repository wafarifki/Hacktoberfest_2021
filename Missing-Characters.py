def missingChars(Str):
    val=['0','1','2','3','4','5','6','7','8','9']
    for i in val:
        if i not in Str:
            print(i,end='')
    present = [False for i in range(MAX_CHAR)]
    for i in range(len(Str)):
        if (Str[i] >= 'a' and Str[i] <= 'z'):
            present[ord(Str[i]) - ord('a')] = True
        elif (Str[i] >= 'A' and Str[i] <= 'Z'):
            present[ord(Str[i]) - ord('A')] = True
    res = ""
    for i in range(MAX_CHAR):
        if (present[i] == False):
            res += chr(i + ord('a'))

    return res

Str=input()

print(missingChars(Str))
