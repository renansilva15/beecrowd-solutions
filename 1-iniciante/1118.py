def read(start, end, message):
  number = float(input())

  if number < start or number > end:
    print(message)

    number = read(start, end, message)
  
  return number


n1 = n2 = 0.0

while n1 != 2:
  n1 = read(0.0, 10.0, 'nota invalida');
  n2 = read(0.0, 10.0, 'nota invalida');

  print('media = %.2f\nnovo calculo (1-sim 2-nao)' %((n1 + n2) / 2.0))

  n1 = read(1, 2, 'novo calculo (1-sim 2-nao)')