#include <iostream>
#include "BinaryTree.hpp"
#include "gtest/gtest.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(BinaryTree, main)
{
    BTreeNode* bt1 = new BTreeNode();
    BTreeNode* bt2 = new BTreeNode();
    BTreeNode* bt3 = new BTreeNode();
    BTreeNode* bt4 = new BTreeNode();
    BTreeNode* bt5 = new BTreeNode();
    BTreeNode* bt6 = new BTreeNode();

    bt1->setData(1);
    bt2->setData(2);
    bt3->setData(3);
    bt4->setData(4);
    bt5->setData(5);
    bt6->setData(6);

    bt1->makeLeftSubTree(bt2);
    bt1->makeRightSubTree(bt3);
    bt2->makeLeftSubTree(bt4);
    bt2->makeRightSubTree(bt5);
    bt3->makeRightSubTree(bt6);

    auto ShowIntData = [](int data)
    {
        std::cout << data << ' ';
    };

    // bt1의 왼쪽 자식 노드의 데이터 출력
    // std::cout << bt1->getLeftSubTree()->getData() << std::endl;
    // EXPECT_EQ(2, bt1->getLeftSubTree()->getData());

    // bt1의 왼쪽 자식 노드의 왼쪽 자식 노드의 데이터 출력
    // std::cout << bt1->getLeftSubTree()->getLeftSubTree()->getData() << std::endl;
    // EXPECT_EQ(4, bt1->getLeftSubTree()->getLeftSubTree()->getData());

    BTreeNode::preorderTraverse(bt1, ShowIntData);
    std::cout << std::endl;
    BTreeNode::inorderTraverse(bt1, ShowIntData);
    std::cout << std::endl;
    BTreeNode::postorderTraverse(bt1, ShowIntData);
    std::cout << std::endl;
}