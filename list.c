 #include "list.h"



node_t*list_createNode(int data)
{
    node_t*new_node=malloc(sizeof(node_t));
    if(new_node==NULLPTR)
    {
        return 0;
    }
    new_node->data=data;
    new_node->next=NULLPTR;
    return new_node;
}

void list_addNodeToLast(node_t**phead,int data)
{
    node_t*new_node=list_createNode(data);
    node_t*current=*phead;
    if(*phead==0)
    {
        *phead=new_node;
        return;
    }

    while(current->next!=0)
    {
        current=current->next;
    }
    current->next=new_node;

}
void list_addNodeToFirst(node_t**phead,int data)
{
    node_t*new_node=list_createNode(data);
    new_node->next=*phead;
    *phead=new_node;



}


int list_editByData(node_t*head,int oldData,int newData)
{
    int flag=0;
    node_t*current=head;
    if(head==0)
    {
        return -1;
    }
    while(current!=0)
    {
        if(current->data==oldData)
        {
            current->data=newData;
            flag=1;
        }
        current=current->next;
    }
    return flag;

}

void list_removeByData(node_t**phead,int oldData)
{
    if(*phead==0)
    {
        return;
    }
    node_t*current=*phead;
    node_t*temp;
    if(current->data==oldData)
    {
        temp=current;
        *phead=current->next;
        free(temp);
        return;
    }
    while(current->next!=0)
    {
        if(current->next->data==oldData)
        {
            temp=current->next;
            current->next=current->next->next;
            free(temp);
            return;

        }
        current=current->next;
    }

}

void list_print(node_t*head)
{
    node_t*current=head;
    while(current!=0)
    {
        printf("%d\n",current->data);
        current=current->next;
    }
    printf("=======================\n");

}
