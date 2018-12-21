#include <iostream>
#include "golf.h"

int main() 
{
	using std::cout;
	using std::cin;
	using std::endl;
	const int size = 2;
	golf g[size];
	for (int i=1;i < size;i++)
	{
		golf andy;
		setgolf(g[0],"Sandu", 1.5);
		setgolf(g[i]);
	}
	cout<<"Here are the players:"<<endl;
	int i;
	for (i=0;i < size;i++)
	{
		showgolf(g[i]);
	}
	golf andy;
	setgolf(andy);
	showgolf(andy);
	handicap(andy,3);
	showgolf(andy);
		if(i>0){
		cout << "Enter a number, please: ";
		int newHandicap;
		cin.clear();

		while(!(cin >> newHandicap))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Try again: ";
		}

		// all players have handicap value reset to that given by
		// the user and players are redisplayed
		cout << "Here are your players with their new handicaps: "<< endl;
		for (int i = 0; i < size; i++)
		{
			handicap(g[i], newHandicap);
			showgolf(g[i]);
		}
	}
	else
	{
		cout << "No players on file." << endl;
	}

	return 0;
}


