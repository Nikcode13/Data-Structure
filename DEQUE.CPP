#include<iostream.h>
#include<conio.h>
#include<deque.h>
#include<string.h>
#include<stdlib.h>


void main()
{
   clrscr();
   deque<int> d;
   deque<int>::iterator it;
   int c,item;
   while(1)
   {
	cout<<"1. size of tthe deque\n ";
	cout<<"2. insert element at tht end\n ";
	cout<<"3. insert element at tht front\n ";
	cout<<"4. delete element at tht end\n ";
	cout<<"5. delete element at tht front\n ";
	cout<<"6. front element at dequeue\n";
	cout<<"7. last element at dequeue\n";
	cout<<"8. display Dequeue \n";
	cout<<"9. Exit\n";
	cout<<"**************************"<<endl;
	cout<<"Enter your choice = ";
	cin>>c;

	switch(c)
	{
	     case 1:
		    cout<<"size of the Dequeue = "<<d.size()<<endl;
		    break;
	     case 2:
		    cout<<"enter value to be insert at the end";
		    cin>>item;
		    d.push_back(item);
		    break;
	     case 3:
		    cout<<"enter value to be insert at the front";
		    cin>>item;
		    d.push_front(item);
		    break;
	     case 4:
		    item=d.back();
		    d.pop_back();
		    cout<<"Element "<<item<<"deleted"<<endl;
		    break;
	     case 5:
		    item=d.front();
		    d.pop_front();
		    cout<<"Element "<<item<<"deleted"<<endl;
		    break;
	     case 6:
		    cout<<"front element of the deque = ";
		    cout<<d.front<<endl;
		    break;
	     case 7:
		    cout<<"back element of the deque = ";
		    cout<<d.back<<endl;
		    break;
	     case 8:
		    cout<<"element of Deque : ";
		    for(it=d.begin();it!=d.end();it++)
		    {
		       cout<<*it<<" ";
		    }
		    cout<<endl;
		    break;
	     case 9:
		    exit(1);
		    break;
	     default:
		    cout<<"Wrong choice"<<endl;
	}
   }
   getch();
}
