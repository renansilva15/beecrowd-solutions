def min(n1: int, n2: int) -> int:
  return n1 if n1 < n2 else n2


n = input()
while n != None:
  left, right = [0 for _ in range(31)], [0 for _ in range(31)]

  for _ in range(int(n)):
    m_and_l = input().split()

    if m_and_l[1] == 'E':
      left[int(m_and_l[0]) - 31] += 1
    
    else:
      right[int(m_and_l[0]) - 31] += 1
  
  result = 0
  for i in range(31):
    result += min(left[i], right[i])
  
  print(result)

  try:
    n = input()

  except:
    n = None