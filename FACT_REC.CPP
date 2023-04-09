#include<iostream.h>
#include<conio.h>
int fact(int n)
{
    if(n==1)
    {
	return n;
    }
    return n*fact(n-1);
}
void main()
{
    clrscr();
    int n;
    cout<<"enter number = ";
    cin>>n;
    int result=fact(n);
    cout<<"fact of "<<n<<" is "<<result;
    getch();
}