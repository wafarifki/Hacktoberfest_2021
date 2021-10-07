"""
Print an H-shaped pattern
"""

pattern = ""
for Row in range(0, 7):
    for Col in range(0, 7):
        if (Col == 1 or Col == 5) or (Row == 3 and 1 < Col < 6):
            pattern += "*"
        else:
            pattern += " "
    pattern += "\n"
print(pattern)
