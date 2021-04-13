#include "Node.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;


Node* insertNode(Node* root, int payload)
{
    if (root == NULL)
    {
        return new Node(payload);
    }
    else
    {
        if (payload == root->getPayload())
        {
            return root;
        }
        else if (root->getPayload() < payload)
        {
            root->setRightChild(insertNode(root->getRightChild(), payload));
        }
        else
        {
            root->setLeftChild(insertNode(root->getLeftChild(), payload));
        }
    }
}

int main()
{
    Node* node = new Node(1);
    insertNode(node, 0);
    insertNode(node, 8);
    insertNode(node, 2);
    insertNode(node, 4);
    insertNode(node, 7);
    insertNode(node, 12);
    insertNode(node, 9);

    node->visitInOrder();
    cout << endl;
    node->visitPreOrder();
    cout << endl;
    node->visitPostOrder();
    cout << endl;

}

