//Chalinee Traiyapanjawit 5930300216 sec801
#include <Iostream>
#include <fstream>      
#include <stdio.h> 
using namespace std; 

struct rec
{     
	char value;  
	struct rec *next;
}; 

struct rec *head=NULL;
char c;


void menu()
{	
	int choose;
	cout<<"===========MENU============="<<endl;
	cout<<"1)Read data from file"<<endl;
	cout<<"2)Decode"<<endl;
	cout<<"3)Exit"<<endl;
	cout<<"Please choose > ";
}

struct rec *insert(int data)
{	
	struct rec *node,*p;
	if(head == NULL)
	{	
		node=new struct rec;
		node-> value = data;
		node-> next = NULL;
		node->next = head;
		head=node;
	}
	else 
	{
		node=new struct rec;
		node-> value = data;
		node->next = NULL;
		p=head;
		while(p)
		{
			if(p->next==NULL)
			{
				p->next=node;
				break;
			}
			p=p->next;
		}	
	}
}

void print(struct rec *head)
{
	struct rec *tmp;
	tmp=head;
	while(tmp!=NULL)
	{
		cout<<tmp->value;
		tmp=tmp->next;
	}
}



void decode(struct rec *head)
{  
 	struct rec *tmp,*tmp2;
 	tmp=head;
 	tmp2=head->next;
	while(tmp->next!=NULL)
	{  
		cout<< tmp->value;
		tmp=tmp->next->next;
	}
	while(tmp2!=NULL)
	{  
		cout<< tmp2->value;
		tmp2=tmp2->next->next;
	}

	cout<<endl;
} 
 
int main () 
{ 	
	while(true)
	{
		int choice;
	  	while(true)
			{
				menu();
				cin>>choice;
				switch(choice)
				{
					case 1:
					{
						ifstream fname("801.dat"); 
						while (fname.get(c))        
						{
							insert(c);
						}
						fname.close();
						cout<<"Encode : ";
						print(head);
						break;
					}
					case 2:
					{
						cout<<"Decode : ";
						decode(head);
						break;
					}
						
					case 3: 
						exit(1);
				}
			}	
	}
}
