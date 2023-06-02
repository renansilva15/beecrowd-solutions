from functools import reduce


number_of_judges = 7
number_of_divers = int(input())

for _ in range(number_of_divers):
  diver_name = input()
  degree_of_difficulty_of_the_dive = float(input())

  scores = []

  scores = input().split()
  scores = list(map(float, scores))
  
  scores.remove(min(scores))
  scores.remove(max(scores))

  final_score = reduce(lambda x, y: x + y, scores)
  final_score *= degree_of_difficulty_of_the_dive

  print('{} {:.2f}'.format(diver_name, final_score))