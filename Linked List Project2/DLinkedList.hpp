#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__


class LinkedList
{
private:
    using LData = int;

    struct Node
    {
        LData data;
        struct Node* next;
    };

    using List = LinkedList;

public:
    LinkedList();
    void insert(LData data);

    int first(LData* pdata);
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

};

#endif  // D_LINKED_LIST_H__