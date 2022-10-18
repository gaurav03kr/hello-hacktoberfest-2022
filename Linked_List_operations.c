#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;           
    struct node *next;  
}*head;
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        
        printf("Enter the data in the list ");
        scanf("%d", &data);

        head->data = data; 
        head->next = NULL; 

        temp = head;

        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                
                scanf("%d", &data);

                newNode->data = data; 
                newNode->next = NULL; 

                temp->next = newNode;
                
                temp = temp->next; 
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}



void insertNodeAtBeginning(int data)
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; 
        newNode->next = head; 

        head = newNode;         

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}

void insertNodeAtEnd(int data)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data;
        newNode->next = NULL; 

        temp = head;

        
        while(temp != NULL && temp->next != NULL)
            temp = temp->next;

        temp->next = newNode; 

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}

void insertNodeAtMiddle(int data, int position)
{
    int i;
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; 
        newNode->next = NULL;

        temp = head;

       
        for(i=2; i<=position-1; i++)
        {
            temp = temp->next;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {
            
            newNode->next = temp->next; 

           
            temp->next = newNode;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}
void removeFront()
{
    struct node *newNode;
    newNode=(struct node*) malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("List is empty");
    }
    else {
        head=head->next;
    }
}
void delFromEnd(){
    struct node *newNode, *secondlast,*lastnode;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("List is empty");
    }
    else if(head->next==NULL)
    {
        head=NULL;
    }
    else{
        secondlast=head;
        lastnode=head->next;
        while(lastnode->next !=NULL)
        {
            lastnode=lastnode->next;
            secondlast=secondlast->next;
        }
        secondlast->next=NULL;
    }
    
}
void lengthOfList()
{
    struct node *temp;
    int c=0;
    temp=head;
    if(head==NULL)
    {
        printf("List is Empty....");
    }
    else{
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        } 
    }
    printf("%d",c);
}

void reverse()
{
    struct node *prevNode ,*currNode,*nextNode;
    if(head==NULL || head->next== NULL)
    {
        printf("List is empty!!");
        
    }
    prevNode=head;
    currNode=head->next;
    while(currNode !=NULL)
    {
        nextNode=currNode->next;
        currNode->next=prevNode;

        prevNode=currNode;
        currNode=nextNode;
    }
    head->next=NULL;
    head=prevNode;

}
void displayList()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("%d ", temp->data); 
            temp = temp->next;                
        }
    }
}

void searchInList(int search)
{
    struct node *temp;
    int c=0,flag;
    if(head==NULL)
    {
        printf("Empty list");
    }
    else{
        temp=head;
        while(temp!= NULL)
        {
            if(temp->data==search)
            {
                printf("Element found");
                flag=0;
                break;
            }
            else{
                flag=1;
            }
            c++;
            temp=temp->next;
            
        }
        if(flag==1)
        {
            printf("Element not Found\n");
        }
}
}

int getNth(int index)
{
    struct node *temp;
    int i=0;
    if(head==NULL)
    {
        printf("List is empty");
    }
    
    else{
        temp=head;
        while(temp!=NULL)
        {
            if(i==index)
            {
               return temp->data;
               break;
            }
            else{
                i++;
                temp=temp->next;
            }
        }
    }
    return temp->data;
}


int main()
{
    int n, data ,position,index,in,search;

    
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();

    
    printf("\nEnter data to insert at beginning of the list: ");
    scanf("%d", &data);
    insertNodeAtBeginning(data);

    printf("\nData in the list \n");
    displayList();
    
    printf("\nEnter data to insert at end of the list: ");
    scanf("%d", &data);
    insertNodeAtEnd(data);

    printf("\nData in the list \n");
    displayList();

printf("\nEnter data to insert at middle of the list: ");
    scanf("%d", &data);
    printf("Enter the position to insert new node: " );
    scanf("%d", &position);
    insertNodeAtMiddle(data, position);

    printf("\nNew list after removal from front");
    removeFront(data);

    printf("\nData in the list \n");
    displayList();

    printf("\nNew List after removal from end\n");
    delFromEnd(data);
    
    printf("\nData in the list \n");
    displayList();
    
    
    printf("\nLength of the list\n");
    lengthOfList();

    printf("\nList after reversal\n");
    reverse();
    displayList();

    printf("\nEnter the data to search in the list ");
    scanf("%d", &search);
    searchInList(search);

    printf("\nEnter the index to extract the data\n");
    scanf("%d",&index);
   in= getNth(index);
   printf("Data at the index=%d",in);

    return 0;
}