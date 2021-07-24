lst = []
prints = []
for i in range(int(input())):
    entry = input().split(' ')
    if entry[0] == '1': lst.append(entry[1])
    elif entry[0] == '2':
        if len(lst) > 0: lst.pop()
        else: continue
    else: print(lst[-1] if len(lst) > 0 else 'Empty!')
# print(*prints, sep='\n')