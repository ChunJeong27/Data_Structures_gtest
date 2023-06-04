#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

class BTreeNode
{
    using BTData = int;

public:
    BTreeNode();
    BTData getData();
    void setData(BTData data);

    // To do: 4개의 함수를 레퍼런스 반환으로 변경할 것
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