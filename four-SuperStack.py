#!/bin/python3

import sys


# Complete the function below.
class SuperStack:
    def __init__(self):
        self.stack = []
    def push(self, v):
        self.stack.append(v)
    def pop(self):
        if self.stack:
            return self.stack.pop()
            
    def inc_bottom(self, i, v):
        i = min(i, len(self.stack))
        for j in range(i):
            self.stack[j] += v

    def top(self):
        if self.stack:
            return self.stack[-1]
        return 'EMPTY'
            

def superStack(operations):
    # n = operations.pop(0)
    # print(n)
    stack = SuperStack();
    for operation in operations:
        command, *args = operation.split()
        if command == 'push':
            v = int(args[0])
            stack.push(v)
            print(stack.top())
        elif command == 'pop':
            stack.pop()
            print(stack.top())
        elif command == 'inc':
            i, v = map(int, args)
            stack.inc_bottom(i, v)
            print(stack.top())
    
            
        
        
        
if __name__ == "__main__":
    operations_cnt = 0
    operations_cnt = int(input())
    operations_i = 0
    operations = []
    while operations_i < operations_cnt:
        try:
            operations_item = str(input())
        except:
            operations_item = None
        operations.append(operations_item)
        operations_i += 1


    res = superStack(operations);
    

