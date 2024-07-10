#include <iostream>
using namespace std;

struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

BstNode *getNewNode(int data)
{
    BstNode *newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

BstNode *Insert(BstNode *root, int data)
{
    if (root == nullptr)
    {
        root = getNewNode(data);
    }
    else if (data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }

    return root;
}

bool Search(BstNode *root, int data)
{
    if (root == nullptr)
        return false;
    else if (root->data == data)
        return true;
    else if (data <= root->data)
        return Search(root->left, data);
    else
        return Search(root->right, data);
}

int main()
{
    BstNode *root = nullptr;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 12);
    root = Insert(root, 25);
    root = Insert(root, 30);
    root = Insert(root, 16);

    int number;
    cout << "Enter the number to search:\n";
    cin >> number;

    if (Search(root, number))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    return 0;
}
