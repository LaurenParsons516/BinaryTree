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

void Node::VisitInOrder()
{
    if (leftChild != NULL)   
    {
        leftChild->VisitInOrder();
    }
    cout << payload << endl;
    if (rightChild != NULL)
    {
        rightChild->VisitInOrder();
    }
}