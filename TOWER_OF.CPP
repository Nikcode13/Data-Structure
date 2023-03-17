//Program for Tower of Hanoi

#include<iostream.h>
#include<conio.h>
void towerOfHanoi(int n, char from_rod, char to_rod,
		  char aux_rod)
{
    if (n == 0)
    {
	return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    cout << "Move disk " << n << " from rod " << from_rod
	 << " to rod " << to_rod << endl;

    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
void main()
{
    int N;
    clrscr();
    cout<<"enter number of disk = ";
    cin>>N;
    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');
    getch();;
}
