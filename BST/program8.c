#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
                printf("Unable to insert in tree ");
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
                temp = temp->rchild;
            }
            else if(No < temp->data)
            {
                if(temp->lchild == NULL)
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
    if(Root != NULL)       // we using recursion so if 
    {
        Inorder(Root->lchild);
        printf("%d\n",Root->data);
        Inorder(Root->rchild);
    }
}

void preorder(PNODE Root)
{
    if(Root != NULL)
    {
        printf("%d\n",Root->data);
        preorder(Root->lchild);
        preorder(Root->rchild);
    }
}

void Postorder(PNODE Root)
{
    if(Root != NULL)
    {
        Postorder(Root->lchild);
        Postorder(Root->rchild);
        printf("%d\n",Root->data);
    }
}

bool Search(PNODE Root,int No)
{
    bool bflag = false;

    if(Root == NULL)
    {
        printf("The Tree is Empty");
        return bflag;
    }

   while(Root != NULL)
   {

    if(Root->data == No)
    {
        bflag = true;
        break;
    }
    else if(No > Root->data)
    {
        Root = Root->rchild;
    }
    else if(No < Root->data)
    {
        Root = Root->lchild;
    }

   }
   return bflag;
}

int CountLeaf(PNODE Root)
{
    static int iCnt = 0;

    if(Root != NULL)
    {
        if((Root->lchild == NULL) && (Root->rchild == NULL))
        {
            iCnt++;
            
        }
        CountLeaf(Root->lchild);
        CountLeaf(Root->rchild);
    }
    return iCnt;
}
int main()
{
    bool bRet = false;
    PNODE Head = NULL;

    Insert(&Head,22);
    Insert(&Head,34);
    Insert(&Head,15);
    Insert(&Head,7);
    Insert(&Head,40);
    Insert(&Head,5);

    printf("Inorder traversal:\n");
    Inorder(Head);

    printf("preorder traversal:\n");
    preorder(Head);

    printf("Post order traversal:\n");
    Postorder(Head);

    int iRet = CountLeaf(Head);

    printf("The Count of Leaf nodes:%d",iRet);

    return 0;
}