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
    else
    {
        temp = *Root;

        while(1)
    {
        if(temp->data == No)
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
                break;
            }
            temp = temp->lchild;
        }
    }
    }
    
}

void Inorder(PNODE Root)
{
    if(Root != NULL)
    {
        Inorder(Root->lchild);
        printf("%d\n",Root->data);
        Inorder(Root->rchild);
    }
}
int main()
{
    PNODE Head = NULL;

    Insert(&Head,22);
    Insert(&Head,33);
    Insert(&Head,14);
    Insert(&Head,43);
    Insert(&Head,5);
    
    Inorder(Head);
    return 0;
}