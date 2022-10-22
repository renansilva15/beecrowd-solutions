x, y = input().split()
x = int(x)
y = int(y)

for i in range(1, y+1):
  if i % x == 0:
    print(i)

  else:
    print(i, end=' ')