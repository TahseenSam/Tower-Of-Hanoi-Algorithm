#include<iostream>
#include<conio.h>
using namespace std;
void move(int ndisk,char from,char to,char inter)
{
	if(ndisk!=0)
	{
		if(ndisk==1)
		{
			cout<<"moving disk 1 from "<<from<<" to "<<to<<endl;
		}
		else
		{
			move(ndisk-1,from,inter,to);
			cout<<"Moving Disk "<<ndisk<<" from "<<from<<" to "<<to<<endl;
			move(ndisk-1,inter,to,from);
		}
	}
	else
	{
		cout<<"No Disks Available ..!!";
	}
}
int main()
{
	int x;
	cout<<"How many disks u have in tower: ";
	cin>>x;
	move(x,'A','C','B');
	getch();
	return 0;
}

