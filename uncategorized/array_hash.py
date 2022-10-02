i = int(input())
while i > 0:
  hash, number_of_element = 0, -1

  j = int(input())
  while j > 0:
    number_of_element += 1

    string = input()
    
    for x in range(len(string)):
      hash += (ord(string[x]) - 65) + number_of_element + x
    
    j -= 1
  
  print(hash)
  i -= 1