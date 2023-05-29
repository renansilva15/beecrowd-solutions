N = int(input())
X = []

numbers = input()
X = list(map(int, numbers.split()))

smallestNumber = X[0]
smallestPosition = 0

for i in range(1, N):
  if X[i] < smallestNumber:
    smallestNumber = X[i]
    smallestPosition = i

print('Menor valor: {}'.format(smallestNumber))
print('Posicao: {}'.format(smallestPosition))