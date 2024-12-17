#include "linkedlist.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// LISTNODE *head;

LISTNODE* add_to_end (LISTNODE *head, int item){
    LISTNODE* tempnode = NULL; 

    tempnode = (LISTNODE*) malloc (sizeof(LISTNODE));
    tempnode->data = item;
    tempnode->next = head;

    head = tempnode;

    return head; 
}

LISTNODE* add_to_front (LISTNODE* item){
    LISTNODE* newitem;
    newitem = NULL;
    return newitem;
}

int list_count (LISTNODE *head){
    if (!head) { return 0;}
    int len = 0;
    while (head->next != NULL) { len++; head = head->next;}

    return len;
}

void print_list (LISTNODE *head){

    while (head->next !=NULL) { 
        printf("%d ", head->data);
        head = head->next;
    }
}

int remove_item (int key){
    return 0;
}

bool is_list_empty (LISTNODE *head) {
    if (head == NULL) return false;

    return false;
}