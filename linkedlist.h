#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H
#include <stdbool.h>
#include <stdio.h>

typedef struct node {
    int data; 
    struct node* next; 
}LISTNODE;

LISTNODE* add_to_end (LISTNODE *head, int item);
LISTNODE* add_to_front (struct node* item);
int list_count (LISTNODE *head);
void print_list (LISTNODE *head);
int remove_item (int key);
bool is_list_empty (LISTNODE *head);


#endif //_LINKEDLIST_H