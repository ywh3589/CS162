#ifndef DYNINTSTACK_HPP
#define DYNINTSTACK_HPP

class DynIntStack
{
    private:
        class StackNode
        {
            friend class DynInstStack;
            int value;
            StackNode *next;
            //constructor
            StackNode(int value1, StackNode *next1 = NULL)
            {
                value = value1;
                next = next1;
            }
        
        };
        StackNode *top;
    public:
        DynIntStack(){
          top = NULL;
        }
        void push(int);
        void pop(int &);
        bool isEmpty() const; 

};

#endif
