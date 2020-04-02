#ifndef sortedLinkedList_h
#define sortedLinkedList_h

struct Node
{
    int data;
    Node* next;
};


void sortedInsert(Node **H, int x)
{
    Node* t;
    Node* q = nullptr;
    Node* p = *H;
    t = new Node;
    t->data = x;
    t->next = nullptr;
    
    if(*H == nullptr)
        p->next = t;
    else
    {
        while(p && p->data<x)
        {
            q = p;
            p = p->next;
        }
        if(p == *H)
        {
            t->next = *H;
            *H = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
    
}


Node* search(Node* p, int key)
{
    while(p != nullptr)
    {
        if(key == p->data)
            return p;
        p = p->next;
    }
    return nullptr;
}

#endif
