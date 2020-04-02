#include <iostream>
#include "sortedLinkedList.h"

int hash(int key)
{
   return key%10;
}


void insert(Node* H[], int key)             // Node* HT[] -----> pointer array
{
    int index = hash(key);
    sortedInsert(&H[index], key);
}


int main()
{
    Node* HT[10];
    Node* temp;
    
    for(int i = 0; i < 10; i++)
        HT[i] = nullptr;
    
    insert(HT, 12);
    insert(HT, 22);
    insert(HT, 43);
    
    temp = search(HT[hash(22)], 22);
    std::cout << temp->data << std::endl;
    return 0;
}
