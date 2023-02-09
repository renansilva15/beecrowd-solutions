while True:
    try:
        text = input()

        result = ''
        home = ''
        end = ''
        last = ''
        for i in text:
            if i in '[]':
                if last == '[':
                    result = home + result
                    home = ''
                
                else:
                    result += end
                    end = ''

                last = i

            elif last == '[':
                home += i

            else:
                end += i
        
        print(home + result + end)
    
    except EOFError:
        break