//Chalinee Traiyapanjawit 5930300216 sec801
#include<stdio.h>
#include<iostream>
using namespace std;


struct rec {
	int data ;
	int value;
	struct rec * next;
	struct rec * p;
};

struct rec *head=NULL;
struct rec *tail=NULL;

void menu()
{
	cout<<"=============MANU============="<<endl;
	cout<<"1) Insert " << endl;
	cout<<"2) Print "<<endl;
	cout<<"3) Exit "<<endl;
	cout << "Please choose > ";
}



void insert(int data)
{
	if(head==NULL)
	{
		head = new struct rec;
		head->value = data;
		head->next = NULL;
		head->p = NULL;
		tail = head;
		return;
	
	}
	
	struct rec*node;
	node = new struct rec;
	node->value = data;
	node->next = NULL;
	node->p = NULL;
	
	if(data<head->value)
	{
		node->next = head;
		head->p = node;
		head = node;
		return;
	}
	if(data>tail->value)
	{
		tail->next = node;
		node->p = tail;
		tail=node;
		return;
	}
	struct rec*temp;
	temp = head;
	while(temp->next)
	{
		if(temp->value<data&&data<temp->next->value)
		{
			node->p = temp;
			node->next = temp->next;
			temp->next->p= node;
			temp->next = node;
			return;
		}
		temp = temp->next;
	}
}

void print()
{
	struct rec*temp;
	temp = head;
	while(temp)
	{
		cout<<temp->value<<" " ;
		temp = temp->next;
	}
	cout<<endl;
}

int main()
{
	int choice;
	  while(true)
		{
			menu();
			cin>>choice;
			
			switch(choice)
			{
				case 1 :
					int data;
					cout<<"Enter number : ";
					cin>>data;
					insert(data);
					cout<<"Insert Success!\n";
					break;
			
	
				case 2:
					cout<<"List : ";
					print();
					break;
					
				case 3: exit(1);
			}
		} 
}
