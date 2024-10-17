#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
 void main()
{
    struct node*head=(struct node*)malloc(sizeof(struct node));

    head->data=45;
    head->link=NULL;

    struct node*current=(struct node*)malloc(sizeof(struct node));
    current->data=68;
    current->link=NULL;

    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=62;
    newnode->link=NULL;

    printf("%d ",current->data);
    printf("%d ",head->data);
    printf("%d ",newnode->data);

}
// in this program we can make many nodes but for that everytime we have to make new structure....
