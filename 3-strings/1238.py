number_of_test_cases = int(input())

while(number_of_test_cases):
    string1, string2 = input().split()

    for i, j in zip(string1, string2):
        print(i + j, end='')

    min_string_size = min(len(string1), len(string2))
    max_string = string1 if len(string1) > len(string2) else string2
    print(max_string[min_string_size:])

    number_of_test_cases -= 1