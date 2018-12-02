#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

struct node {
  int x;
  node *next;
};

void print_list(node* temp)
{
     while(temp!=NULL)
     {
        cout<<temp->x<<endl;
        temp = temp->next;
     }

}

int main()
{
    node *head;
    node *current;
    current = NULL;



    for(int i =0;i<3;i++)
    {
        node *temp;
        temp = new node;

        if(current==NULL)
        {
            node *temp1;
            temp1 = new node;
            cin>>temp->x;
            temp->next= temp1;
            current = temp1;
            cout<<temp->next<<endl;
            head=temp;
        }
        else
        {
            node *temp2;
            temp2 = new node;
            cin>>temp->x;
            temp->next = temp2;
            temp2->next = NULL;
            cout<<temp->next<<endl;
            //temp2->x=2;
            //temp->next = NULL;

        }

    }
    //temp->next = NULL;
    print_list(head);

}



