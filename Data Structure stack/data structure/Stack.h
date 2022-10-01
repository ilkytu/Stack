//
//  Stack.h
//  c++ lab6
//
//  Created by İlkay Türe on 20.04.2022.
//

#ifndef Stack_h
#define Stack_h
const int MAX_STACK = maximum-size-of-stack;
typedef desired-type-of-stack-item StackItemType;
class Stack{
    
public:
    Stack();
bool isEmpty() const;
bool push(StackItemType newItem);
bool pop();
bool pop(StackItemType& stackTop);
bool getTop(StackItemType& stackTop) const;
private:
// array of stack items
     StackItemType items[MAX_STACK];
// index to top of stack
int top;
};

#endif /* Stack_h */
