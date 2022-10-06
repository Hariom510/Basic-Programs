#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* create(){
    struct node* head = NULL;
    struct node* tail = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    tail = (struct node*)malloc(sizeof(struct node));
    int data;
    printf("enter -1 to quit");
    scanf("%d", &data);
    while(data != -1){
        struct node* newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = NULL;
        
        if(head == NULL){
            head->next = newNode;
            tail->next = newNode;
            }
            else{
                tail->next = newNode;
            }
            tail = newNode;
            scanf("%d", &data);
    }
    return head;
}

void display(struct node* head){ 
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp = head;  
    while(temp != NULL){
        printf("%d", temp->data);
        temp = temp->next;  
    }

}
void main(){
    struct node* head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head = create();
    display(head);
}