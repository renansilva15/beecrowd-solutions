def show(array: list) -> None:
  message = ''

  if array:
    message = 'impar' if array[0] % 2 == 1 else 'par'

  for i in range(len(array)):
    print('{}[{}] = {}'.format(message, i, array[i]))


odd, even = [], []

for _ in range(15):
  aux = int(input())

  if aux % 2:
    odd.append(aux)
  
  else:
    even.append(aux)
  
  if len(odd) == 5:
    show(odd)
    odd = []
  
  if len(even) == 5:
    show(even)
    even = []

show(odd)
show(even)