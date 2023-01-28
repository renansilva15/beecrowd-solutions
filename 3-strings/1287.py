while True:
    try:
        n = input()
        n = n.replace('O', '0')
        n = n.replace('o', '0')
        n = n.replace('l', '1')
        n = n.replace(',', '')
        n = n.replace(' ', '')

        try:
            n = int(n)

            if n > 2147483647:
                n = 'error'

        except:
            n = 'error'
        
        print(n)

    except EOFError:
        break