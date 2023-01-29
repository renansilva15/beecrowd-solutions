A, B, C = input().split()
A = int(A)
B = int(B)
C = int(C)

while A != 0:
    result = []
    
    if A == B and B == C:
        if A == 13:
            result.append('*')

        else:
            result = [A + 1, A + 1, A + 1]

    elif A == B or B == C or A == C:
        # Find the pairs
        pair = A
        no_pair = C

        if B == C:
            pair = B
            no_pair = A

        elif A == C:
            no_pair = B
        # ==========================
        
        if no_pair == 13:
            no_pair = 1
            pair += 1

            result = [no_pair, pair, pair]

        elif pair == 13 and no_pair == 12:
            result = [1, 1, 1]
            
        else:
            no_pair += 1

            if no_pair == pair:
                no_pair += 1
            
            result = [no_pair, pair, pair]

    else:
        result = [1, 1, 2]
    
    if len(result) < 3:
        print(result[0])

    else:
        result.sort()
        print(result[0], result[1], result[2])

    A, B, C = input().split()
    A = int(A)
    B = int(B)
    C = int(C)