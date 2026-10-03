#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void print_value(struct node *next){
    while(next!= NULL){
        printf("%d ->",next->data);
        next=next->next;
    }
    printf("NULL");
}

int main() {
struct node *head=NULL;
    struct node *end=NULL;

    head= (struct node *)malloc(sizeof(struct node ));
    end=(struct node *)malloc(sizeof(struct node));
    head->data=10;
    head->next=end;
    end->data=20;
    end->next=NULL;
    print_value(head);
    free(head);
    free(end);

    return 0;
}