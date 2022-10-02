N = []

for _ in range(20):
  N.append(int(input()))

for i in range(len(N) // 2):
  aux = N[i];
  N[i] = N[19 - i];
  N[19 - i] = aux;

for i in range(len(N)):
  print('N[{}] = {}'.format(i, N[i]))