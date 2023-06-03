#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

class BTreeNode
{
    using BTData = int;

public:
    BTreeNode();
    BTData getData();
    void setData(BTData data);

    BTreeNode* getLeftSubTree();
    BTreeNode* getRightSubTree();

    void makeLeftSubTree(BTreeNode* sub);
    void makeRightSubTree(BTreeNode* sub);

private:
    BTData data;
    BTreeNode* left;
    BTreeNode* right; 

};

#endif  // __BINARY_TREE_H__