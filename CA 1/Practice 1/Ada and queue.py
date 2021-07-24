lst = []
for i in range(int(input())):
    entry = input().split(' ')
    if entry[0] == 'back': print(lst.pop() if len(lst) > 0 else 'No job for Ada?')
    elif entry[0] == 'front': print(lst.pop(0) if len(lst) > 0 else 'No job for Ada?')
    elif entry[0] == 'reverse': lst = lst[::-1]
    elif entry[0] == 'push_back': lst.append(entry[1])
    else: lst.insert(0, entry[1])
