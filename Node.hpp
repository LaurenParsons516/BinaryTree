class Node
{
    private:
        int payload;
        Node* rightChild;
        Node* leftChild;

    public:
        Node(int payload);
        void setRightChild(Node* n);
        void setLeftChild(Node* n);
        Node* getRightChild();
        Node* getLeftChild();
        int getPayload();
        void VisitInOrder();
};