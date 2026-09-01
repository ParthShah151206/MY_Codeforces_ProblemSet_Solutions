s = input()
uppercase = 0
lowercase = 0
for c in s:
    if c.isupper():
        uppercase += 1
    else:
        lowercase += 1

if uppercase>lowercase:
    print(s.upper())
else:
    print(s.lower())