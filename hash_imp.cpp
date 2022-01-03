#include "hash_header.h"
int Hash::h(int x)
{
    return x%10;
}
void Hash::insert(int x)
{
	int pos = h(x);
    Node *n = new Node();
    n->data=x;
    n->next=NULL;
    if(head[pos]==NULL)
    {
        head[pos]=n;
    }
    else
    {
        Node* temp = head[pos];
        while(temp->next!= NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
    cout<<"\nElement hashed into table.\n\n";
}
void Hash::search()
{
    int e;
    cout<<"Enter the element to search : ";
    cin>>e;
    int index = h(e);
    Node *temp = head[index];
    int flag;
    while(temp != NULL)
    {
        if(temp->data == e)
        {
            cout<<"\nElement found.\n\n";
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
        temp = temp->next;
    }
    if(flag == 1)
        cout<<"\nElement not found.\n\n";
}
void Hash::display()
{
    cout<<"Index\t\tElements\n\n";
    for(int i=0;i<10;i++)
    {
        cout<<i<<"\t|\t";
        Node *temp=head[i];
        while(temp!=NULL)
        {
            cout<<temp->data;
            if(temp->next!=NULL)
                cout<<"->";
            temp=temp->next;
        }
        cout<<"\n";
    }
    cout<<"\n";
}