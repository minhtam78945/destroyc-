#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node *creatnode(int value)
{
    node *p = new node;
    p->info= value;
    p->next = NULL;
    return p;
}
node *addfirst(node *&head , int x)
{
    if(head==NULL)
    {
        node *p = creatnode(x);
        return p;
    }
    node *temp = new node;
    temp->info= x;
    temp->next = head; // head khai bao o main 
    temp = head; //
    return head;
}
node *addlast (node *&head , int x)
{
    if(head==NULL)
    {
         node *p = creatnode(x);
        return p;
    }
    node *q = head;
    while(q->next!=NULL)
    {
        q = q->next;
    }
    node *temp = new node;
    temp->info = x;
    temp->next = NULL;
    q->next = temp;
    return  head;
}