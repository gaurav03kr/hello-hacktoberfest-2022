#include<stdio.h>
#include<malloc.h>
struct Node
{
    int val;
    struct Node *prev;
    struct Node *next;
};
typedef struct Node N;
N *start = NULL,*ptr,*tmp,*t;

void createList()
{
    ptr = (N *)malloc(sizeof(N));
    printf("Enter the value");
    scanf("%d",&ptr -> val);
    ptr -> next = NULL;
    if(start == NULL){
        start = ptr;
        tmp = ptr;
        ptr -> prev = NULL;
    }
    else{
        tmp -> next = ptr;
        ptr -> prev = tmp;
        tmp = ptr;
    }
}

void insertFirst(){
    ptr = (N *)malloc(sizeof(N));
    printf("Enter the value");
    scanf("%d",&ptr -> val);
    ptr -> prev = NULL;
    ptr -> next = start;
    start -> prev = ptr;
    start = ptr;
}

void insertLast(){
    tmp = start;
    ptr = (N *)malloc(sizeof(N));
    printf("Enter the value");
    scanf("%d",&ptr -> val);
    while(tmp -> next != NULL){
        tmp = tmp -> next;
    }
    ptr -> prev = tmp;
    tmp -> next = ptr;
    ptr -> next = NULL;
}

void insertAfter(){
    tmp = start;
    int n;
    printf("Enter the node");
    scanf("%d",&n);
    ptr = (N *)malloc(sizeof(N));
    printf("Enter the value");
    scanf("%d",&ptr -> val);
    while(tmp -> val != n){
        tmp = tmp -> next;
    }
    ptr -> prev = tmp;
    ptr -> next = tmp -> next;
    tmp -> next -> prev = ptr;
    tmp -> next = ptr;
}

void insertBefore(){
    tmp = start;
    int n;
    printf("Enter the node");
    scanf("%d",&n);
    ptr = (N *)malloc(sizeof(N));
    printf("Enter the value");
    scanf("%d",&ptr -> val);
    while(tmp -> val != n){
        t = tmp;
        tmp = tmp -> next;
    }
    ptr -> next = tmp;
    ptr -> prev = t;
    t -> next = ptr;
    tmp -> prev = ptr;
}

void deleteFirst(){
    if(start -> next == NULL){
        start = NULL;
        free(start);
    }
    else{
        tmp = start;
        start = start -> next;
        start -> prev = NULL;
        free(tmp);
    }
}

void deleteLast()
{
    tmp = start;
    while(tmp -> next != NULL){
        tmp = tmp -> next;
    }
    tmp -> prev -> next = NULL;
    free(tmp);
}

void deleteAny(){
    tmp = start;
    int n;
    printf("Enter the node");
    scanf("%d",&n);
    while(tmp -> val != n){
        tmp = tmp -> next;
    }
    tmp -> prev  -> next = tmp -> next;
    tmp -> next -> prev = tmp -> prev;
    free(tmp);
}

void deletebefore(){
    int c = 0,n;
    tmp = start;
    printf("Enter the node number");
    scanf("%d",&n);
    while(tmp != NULL){
        if(c == n){
            ptr = tmp -> prev;
            ptr -> prev -> next = tmp;
            tmp -> prev = ptr -> prev;
            free(ptr);
        }
        tmp = tmp -> next;
        c++;
    }
}

void deleteafter(){
    tmp = start;
    int n;
    printf("Enter the value");
    scanf("%d",&n);
    while (tmp -> val != n)
    {
       tmp = tmp -> next;
    }
    ptr = tmp -> next;
    tmp -> next = ptr -> next;
    ptr -> next -> prev = tmp;
    free(ptr);
}
void status()
{
    ptr = start;
    if(ptr == NULL){
        printf("Empty List");
        return;
    }
    while(ptr -> next != NULL){
        printf("%d ->",ptr -> val);
        ptr = ptr -> next;
    }
    while(ptr != NULL){
        printf("%d <-",ptr -> val);
        ptr = ptr -> prev;
    }
}


int main()
{
    int ch;
    do{
        printf("\n=======MENU=======\n");
        printf("\n1..........CREATE LIST........");
        printf("\n2..........INSERT BEGINING........");
        printf("\n3..........INSERT LAST........");
        printf("\n4..........INSERT AFTER........");
        printf("\n5..........INSERT BEFORE........");
        printf("\n6..........DELETE FIRST........");
        printf("\n7..........DELETE LAST........");
        printf("\n8..........DELETE BEFORE........");
        printf("\n9..........DELETE AFTER........");
        printf("\n10..........DELETE ANY........");
        printf("\n11..........DISPLAY.......");
        printf("\n12..........EXIT.......");
        printf("\n Enter the choice");
        scanf("%d",&ch);
        switch(ch){
            case 1: createList();
                    break;
            case 2: insertFirst();
                    break;
            case 3: insertLast();
                    break;
            case 4: insertAfter();
                    break;
            case 5: insertBefore();
                    break;
            case 6: deleteFirst();
                    break;
            case 7: deleteLast();
                    break;  
            case 8: deletebefore();
                    break;
            case 9: deleteafter();
                    break;
            case 10: deleteAny();
                    break;    
            case 11: status();
                    break;
        }
    }
  while(ch != 0);
}
