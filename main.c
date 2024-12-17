#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "linkedlist.h"

extern long factorial(int);

int main (int argc, char** args) {
    // printf ("result of factorial: %d", factorial(5));
    printf ("##### Demo for a linkedlist #####\n\n");
    
    LISTNODE* head;
    LISTNODE* node1 = (LISTNODE*) malloc (sizeof(LISTNODE));
    node1->data = 10;
    head = node1;
    
    int c;
    do
    {
        printf ("Enter new item in the list: ");
        int newitem =0;/* code */
        scanf("%d", &newitem);
        head = add_to_end(head, newitem);
        
    } while ((c=getchar()) != EOF); //todo: fix this bug
   
    printf ("No of item in list now: %d\n", list_count(head));
    printf("list now: ");
    print_list(head);
    // getchar();
    return 0;
}