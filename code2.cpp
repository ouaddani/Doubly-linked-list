#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;



struct node{

float data;
node * next;
node * previous;


};

class listA{
private:
	node * head;
	node * tail;
public:
    	listA(){
		head=NULL;
		tail=NULL;
	}

	void addEnd(float nb){


		node* tmp=new node();
		tmp->data=nb;
		tmp->next=NULL;
		tmp->previous=NULL;

		if(head==NULL){
			head=tmp;
			tail=tmp;



		}

		else{


			tail->next=tmp;
			tmp->previous=tail;
			tail=tmp;
		}

	}

	void display(){

		node* tmp=new node();
		tmp=head;
		while(tmp!=NULL){

			cout<<tmp->data<<"\t";
			tmp=tmp->next;

		}




	}

void addPosition(int pos,float nb){

    node* tmp=new node();
    node* curr=new node();
    node* prev=new node();
    curr=head;

    for(int i=1;i<pos;i++){

        prev=curr;
        curr=curr->next;

    }



    tmp->data=nb;
    prev->next=tmp;
    tmp->previous=prev;
    tmp->next=curr;
    curr->previous=tmp;


}
};

int main()
{
    listA obj;
	obj.addEnd(15);
    obj.addEnd(10);
	obj.addEnd(17);
	obj.addEnd(11);
cout<<"\n-----------------------------------------------------------------\n";
cout<<"\n---------------Displaying all item in the list ------------------\n";
cout<<"\n-----------------------------------------------------------------\n";
obj.display();
obj.addPosition(2,20);
cout<<"\n-----------------------------------------------------------------\n";
cout<<"\n--------------------Displaying added items------------------------\n";
cout<<"\n-----------------------------------------------------------------\n";
obj.display();

return 0;
}
