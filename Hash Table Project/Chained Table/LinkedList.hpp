#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__

using LData = int;

struct Node
{
    LData data;
    Node* next;
};

class LinkedList
{
public:
    LinkedList();
    void insert(LData data);
    
    void first(LData* pdata);
    int next(LData* pdata);

    LData remove();
    int count();

    void setSortRule(int (*comp)(LData d1, LData d2));

private:
    Node* head;
    Node* cur;
    Node* before;
    int numOfData;
    int (*comp)(LData d1, LData d2);

    void firstInsert(LData data);
    void searchInsert(LData data);

};

#endif  // __D_LINKED_LIST_H__