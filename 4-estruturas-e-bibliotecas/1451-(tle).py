class Node:
  def __init__(self, text=None, next=None, previous=None):
    self.text = text
    self.next = next
    self.previous = previous

#   def __str__(self):
#     return str(self.text)


while True:
    try:
        text = input()

        aux = ''
        linked_list = Node('')
        for c in text:
            if c == '[':
                while linked_list.previous:
                    linked_list = linked_list.previous
                
                linked_list = Node('', linked_list)
                linked_list.next.previous = linked_list
                aux = ''
                continue

            elif c == ']':
                while linked_list.next:
                    linked_list = linked_list.next
                
                linked_list.next = Node('', None, linked_list)
                linked_list = linked_list.next
                aux = ''
                continue
            
            aux = aux + c
            linked_list.text = aux
        
        # Go back to the start
        while linked_list.previous:
            linked_list = linked_list.previous
        
        while linked_list:
            print(linked_list.text, end='')
            linked_list = linked_list.next
        
        print('')

    except EOFError:
        break