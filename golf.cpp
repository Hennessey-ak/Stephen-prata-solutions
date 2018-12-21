#include <iostream>
#include <cstring>
#include "golf.h"
using std::cout;
using std::cin;
using std::endl;

void setgolf(golf &g, const char *name, int hc)
{
	std::strcpy(g.fullname,name);
	g.handicap = hc;
}
int setgolf(golf &g)
{
	cout<<"Enter the name (Enter nothing to quit): ";
	cin.get(g.fullname,Len);
	if(!cin || g.fullname[0] == '\0')
	{
		cin.clear();
		cin.get();
		return 0;
	}
	else 
	{
		while(cin.get() != '\n')
			continue;
		cout<<"Enter the handicap: ";
		cin>>g.handicap;
		cin.get();
		return 1;
	}
}
void showgolf(const golf &g)
{
	cout<<"Name: "<<g.fullname<<endl;
	cout<<"Handicap: "<<g.handicap<<endl;
}
void handicap(golf &g,int hc)
{
	g.handicap = hc;
}
