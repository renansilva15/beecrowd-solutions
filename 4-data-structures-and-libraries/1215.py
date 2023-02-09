import sys
from re import findall


dictionary = set()
for i in sys.stdin:
    dictionary = dictionary.union(findall('[a-z]+', i.lower()))

dictionary = sorted(dictionary)
for i in dictionary:
    print(i)