#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
};
class Hash
{
    public:
        Node** head = new Node*[10];
        Hash()
        {
            for(int i=0;i<10;i++)
            {
                *(head+i)=NULL;
            }
        }
        int h(int x);
        void insert(int x);
        void search();
        void display();
};