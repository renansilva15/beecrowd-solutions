N = int(input())

for _ in range(N):
    hidden_mesage = input().split()

    decoded_message_array = list(map(lambda word: word[0], hidden_mesage))
    decoded_message = ''.join(decoded_message_array)
    print(decoded_message)