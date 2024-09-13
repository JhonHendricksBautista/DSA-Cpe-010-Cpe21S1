class Node:
    def __init__(self, data):
        self.data = data #Assgin Data
        self.next = None #initiliaze
        #next as null

class LinkedLists:
    #function to initialize the linked
    #list object
    def __init__(self):
        self.head = None
    
    def printdata(self):
        temp = head
        while(temp):
            print(temp.data)
            

if __name__ == 'main':
    llist = LinkiedList()

    llist.head = Node(1)
    second = Node(2)
    third = Node (3)

    llist.head.next = second
    second.next = third
    
    llist.printdata()

