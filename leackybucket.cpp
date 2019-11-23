#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#define bucketsize 512

using namespace std;

void bktInput(int a,int b)
{
	if(a>bucketsize)
	{
		cout<<"\nOverflow\n";
	}
	else
	{
		usleep(500);
	}
	while(a>b)
	{
		cout<<b<<"bytes outputed\n";
		a=a-b;
		usleep(500);
	}
	if(a>0)
	{
		cout<<"Last "<<a<<" bytes sent"<<endl;
		
	}
	cout<<"bucket o/p successful\n";
	
}
int main()
{
	int op,pktsize;
	cout<<"\nEnter op rate";
	cin>>op;
	
	for(int i=0;i<5;i++)
	{
		usleep(rand()%1000);
		pktsize = rand()%1000;
		cout<<"\n pkt number "<<i+1<<"\t size "<<pktsize<<endl;
		bktInput(pktsize,op);
	}
	return 0;
}
