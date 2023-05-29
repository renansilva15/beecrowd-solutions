import string

def right_shift(character:str, number_of_right_shift:int) -> str:
  decoded_character = ord(character) - number_of_right_shift
  
  if decoded_character < 65:
    decoded_character += 26

  return chr(decoded_character)

# capital_alphabet = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
# capital_alphabet = string.ascii_uppercase

N = int(input())

for _ in range(N):
  codified_sentence = input()
  number_of_right_shift = int(input())

  cesar_cipher = list(map(lambda character: right_shift(character, number_of_right_shift), list(codified_sentence)))

  cesar_cipher = ''.join(cesar_cipher)
  print(cesar_cipher)