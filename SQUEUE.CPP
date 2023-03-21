#include<iostream.h>
#include<conio.h>
int queue[4],n=4,front=-1,rear=-1;
void enqueue()
{
    int val;
    if(rear==n-1)
    {
	cout<<"Queue Overflow\n";
    }
    else
    {
	 if(front==-1)
	 {
	     front=0;
	 }
	 cout<<"insert the element in queue : ";
	 cin>>val;
	 rear++;
	 queue[rear]=val;
    }
}
void dequeue()
{
    if(front==-1|| front>rear)
    {
       cout<<"Queue Underrflow";
       return;
    }
    else
    {
       cout<<"element delet from queue is : "<<queue[front]<<endl;
       front++;
    }
}
void Display()
{
    if(front==-1)
    {
	cout<<"queue is empty";
    }
    else
    {
	cout<<"queue element are : ";
	for(int i=front;i<=rear;i++)
	{
	     cout<<queue[i]<<" ";
	}
    }
}
void main()
{
   int ch;
   clrscr();
   cout<<"1) insert element to queue\n";
   cout<<"2) delet element froom queue\n";
   cout<<"3) Display all the elements of queue\n";
   cout<<"4) Exit\n";
   do
   {
      cout<<"enter your choice : ";
      cin>>ch;
      switch(ch)
      {
	  case 1:
		 enqueue();
		 break;
	  case 2:
		 dequeue();
		 break;
	  case 3:
		 Display();
		 break;
	  case 4:
		cout<<"Exit";
		break;
	  default:
		cout<<"invalid choice";
      }
   }while(ch!=4);
      getch();
}






















































