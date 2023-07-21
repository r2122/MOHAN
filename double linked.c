#include<stdio.h>
#include<stdlib.h>
struct node
{

    int data;
    struct node*next,*prev;
};
void display(struct node*first)
{
    while(first!=NULL)
    {

        printf("%d",first->data);

        first=first->next;
    }}
    void create()
    {
        struct node * first ,*last;
        first=(struct node*)malloc(sizeof (struct node));
        int n;
        scanf("%d",&n);
        first->data=n;
        first->next=NULL;
        first->prev=NULL;
        last=first;
        scanf("%d",&n);
        while(n!=-1)
        {
            struct node*temp;
            temp=(struct node*)malloc(sizeof(struct node));
            temp->data=n;
            temp->next=NULL;
            last->next=temp;
            temp->prev=last;
            last=temp;
            scanf("%d",&n);
        }
        display(first);
    }


    void main()
    {
        create();
    }
