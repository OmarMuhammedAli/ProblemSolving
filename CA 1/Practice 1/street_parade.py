def street_parade(lst):
    ex = 1
    stack = []
    for i in lst:
        while len(stack) > 0:
            if stack[-1] == ex:
                stack.pop()
                ex += 1
        if i == ex: ex += 1
        else: stack.append(i)
        lst.pop(0)
    if len(lst) == 0: