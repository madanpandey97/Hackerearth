#include <bits/stdc++.h>

using namespace std;
struct node{
            	int  data;
	             struct node *next;
	               struct node *prev;
           }
struct node head;
int create_node()
{
	       struct node *temp1;
          	temp=new node;
            	int value;
              	cin>>value;
                	temp->data=value;
                    	temp->next=NULL;
                        	temp->prev=NULL;
	                           return temp;
}
void insert_at_begin()
{
       	struct node *temp1;
	         temp1=new node;
	           temp1=createnode();
	               if(head==NULL)
                 	{  
                   	head=temp1;
	                   	return;
	                 }
                      head_>prev=temp1;
                         temp1_>next=head;
                            head=temp;
}

void insert_at_end()
{
          	struct node *p;
            	p=new node();
	             if(head==NULL)
              {
                 head=p;
                   return ;
                    }
                         struct node * q;
                  while(head->next != 0)
              {
                        q->peve=q->next;
                            q=q->next;
               }          
                                  q->next=p;
                                     p->prev=q;

  }

void print_list()

{
struct node *itreat;
itreat=head;
          while(itreat->head != 0)
          {
           cout<<itreat->data<<"----";
           }
} 
int main() {
	      
head=NULL;
insert_at_begin();
insert_at_begin();
 insert_at_end();
insert_at_end();
print_list();
	return 0;
}
