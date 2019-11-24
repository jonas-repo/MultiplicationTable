#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main()
{ 
	int a,b,c;
	cout<<"ingresa el numero: "; cin>>a;
	b=0;
	while(b<=10)
	{	
		c=a*b;
 		cout<<a<<"*"<<b<<"="<<c<<endl;
 		b++;
	}
	getch();
}

