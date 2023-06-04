#include "BinaryTree.hpp"

BTreeNode::BTreeNode() : data(0), left(nullptr), right(nullptr)
{ }

BTreeNode::BTData BTreeNode::getData()
{
    return data;
}

void BTreeNode::setData(BTreeNode::BTData data)
{
    this->data = data;
}

BTreeNode* BTreeNode::getLeftSubTree()
{
    return left;
}

BTreeNode* BTreeNode::getRightSubTree()
{
    return right;
}

void BTreeNode::makeLeftSubTree(BTreeNode* sub)
{
    if(this->left != nullptr)
        delete this->left;

    this->left = sub;
}

void BTreeNode::makeRightSubTree(BTreeNode* sub)
{
    if(this->right != nullptr)
        delete this->right;

    this->right = sub;
}