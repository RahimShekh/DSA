#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Insert(PPNODE Root,int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Root == NULL)
    {
        *Root = newn;
    }

    while(1)
    {
        temp = *Root;

        if(temp->data == newn->data)
        {
            printf("Unable to insert node cuz it already exits");
            free(newn);
            break;
        }
        else if(No > temp->data)
        {
            if(temp->rchild == NULL)
            {
                temp->rchild = newn;
                break;
            }
            temp = temp->rchild;  // travel
        }
        else if(No < temp->data)
        {
            if(temp ->lchild == NULL)
            {
                temp->lchild = newn;
            }
            temp = temp->lchild;
        }
    }
}
int main()
{
    PNODE Head = NULL;

    Insert(&Head,22);
    Insert(&Head,33);
    Insert(&Head,14);
    Insert(&Head,43);
    
    return 0;
}