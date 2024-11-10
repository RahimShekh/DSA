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

    newn =(PNODE)malloc(sizeof(NODE));

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
                printf("Duplicate Value Cant Accepted");
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
                    temp->lchild =  newn;
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

void Preorder(PNODE Root)
{
    if(Root != NULL)
    {
        printf("%d\n",Root->data);
        Preorder(Root->lchild);
        Preorder(Root->rchild);
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

bool Search(PNODE Root,int No)
{

    bool Flag = false;

    while(Root != NULL)
    {
        if(Root->data == No)
        {
            Flag = true;
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
    return Flag;
}
int main()
{
    PNODE Head = NULL;

    Insert(&Head,25);
    Insert(&Head,4);
    Insert(&Head,15);
    Insert(&Head,34);
    Insert(&Head,3);
    Insert(&Head,45);

    printf("Inorder traversal:\n");
    Inorder(Head);

    printf("preorder traversal:\n");
    Preorder(Head);

    printf("PostOrder traversal:\n");
    Postorder(Head);

    int iRet = CountLeaf(Head);

    printf("The Count of Leaf node:%d\n",iRet);

    bool bRet = Search(Head,35);

    if(bRet == true)
    {
        printf("The element is in the BST");
    }
    else
    {
        printf("The element is not in the BST");
    }


    return 0;
}