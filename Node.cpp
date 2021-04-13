#include "Node.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

Node::Node(int payload)
{
    this->payload = payload;
    this->rightChild = NULL;
    this->leftChild = NULL;
}

void Node::setRightChild(Node* n)
{
    this->rightChild = n;
}

void Node::setLeftChild(Node* n)
{
    this->leftChild = n;
}

Node* Node::getRightChild()
{
    return this->rightChild;
}

Node* Node::getLeftChild()
{
    return this->leftChild;
}

int Node::getPayload()
{
    return this->payload;
}

void Node::visitInOrder()
{
    if (leftChild != NULL)   
    {
        leftChild->visitInOrder();
    }

    cout << payload << "  ";

    if (rightChild != NULL)
    {
        rightChild->visitInOrder();
    }
}

void Node::visitPreOrder()
{
    cout << payload << "  ";
    
    if (leftChild != NULL)   
    {
        leftChild->visitPreOrder();
    }

    if (rightChild != NULL)
    {
        rightChild->visitPreOrder();
    }
}

void Node::visitPostOrder()
{
    if (leftChild != NULL)   
    {
        leftChild->visitPostOrder();
    }
    
    if (rightChild != NULL)
    {
        rightChild->visitPostOrder();
    }

    cout << payload << "  "; 
}