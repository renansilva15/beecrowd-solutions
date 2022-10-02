grades = input().split()

average = ((float(grades[0]) * 2.0) + (float(grades[1]) * 3.0) + (float(grades[2]) * 4.0) + (float(grades[3]) * 1.0)) / (2.0 + 3.0 + 4.0 + 1.0)

print('Media: %.1f' %(average))

if average >= 7.0:
  print('Aluno aprovado.')

elif average < 5.0:
  print('Aluno reprovado.')

else:
  print('Aluno em exame.')

  # exam grade
  grades[0] = float(input())
  print('Nota do exame: %.1f' %(grades[0]))

  grades[0] = (grades[0] + average) / 2.0

  if grades[0] >= 5.0:
    print('Aluno aprovado.')

  else:
    print('Aluno reprovado.')

  print('Media final: %.1f' %(grades[0]));