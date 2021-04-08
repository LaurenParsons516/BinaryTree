#include "Node.hpp"
#include <stdlib.h>

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
    insertNode(node, 5);
    insertNode(node, 10);
    insertNode(node, 3);

    node->VisitInOrder();

}

