while True:
    try:
        n, m = input().split()
        n = int(n)
        m = int(m)

        vector = input().split()
        for i in range(m):
            k, v = input().split()
            k = int(k)
            v = int(v)

            count = 0
            for j in range(len(vector)):
                if int(vector[j]) == v:
                    count += 1
                    if count == k:
                        print(j+1)
                        break

            if count != k:
                print(0)

    except EOFError:
        break