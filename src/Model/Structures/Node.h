#ifndef Node_h
#define Node_h

#include <stdio.h>

template <class Type>
class Node{
//This section is available to All the subclasses of Node
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};

template <class Type>
Node<Type> :: Node()
{
    //Needed for default constructor compilation
    //Since when we create a structure it does no have an item to store yet.
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

//#Basic methods
template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}

#endif
