n = int(input())
p = [int(i) for i in input().split()]
gifted_from = [p.index(i + 1) + 1  for i in range(n)]
print(*gifted_from)