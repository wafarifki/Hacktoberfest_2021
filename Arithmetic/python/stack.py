class Stack:

    def __init__(self):
        self.stack = []

    def pop(self):
        if len(self.stack) < 1:
            return None
        return self.stack.pop()

    def push(self, item):
        self.stack.append(item)

    def size(self):
        return len(self.stack)


# Example
stc = Stack()
stc.push(1)
stc.push(2)
stc.push(3)
stc.push(4)
stc.push(5)
stc.push(6)
stc.push(7)
print("Stack is : " + str(stc.stack))
print("Stack size : " + str(stc.size()))
print("----------------------------------")
stc.pop()
stc.pop()
stc.pop()
print("Stack after pop is : " + str(stc.stack))
print("Stack size : " + str(stc.size()))


"""

The output of the above program will be:
Stack is : [1, 2, 3, 4, 5, 6, 7]
Stack size : 7
----------------------------------
Stack after pop is : [1, 2, 3, 4]
Stack size : 4

"""
