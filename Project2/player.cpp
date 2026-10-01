#include <iostream>
#include <vector>
#include <clocale>
using namespace std;


struct loc {
	int nam;
	string loc;
	string backlok;
	string nextlok;
};

struct player {
	string loca = "home";
};

vector<loc> ListLoc =
{
	{1, "home","","home2" },
	{2, "home2","home","home3"},
	{3, "home3","home2","home4"},
	{4, "home4","home3",""},
};



int main()
{
	setlocale(0, "");


	int n = 0;
	player stepan;
	cout << "введите локацию: ";
	cin >> n;
	stepan.loca = ListLoc[n].loc;
	cout << stepan.loca << endl;

	int index;


	for (int i = 0; i < ListLoc.size(); i++)
	{
		if (stepan.loca == ListLoc[i].loc)
		{
			cout << ListLoc[i].nam << " ";

			cout << ListLoc[i].loc << " ";
			cout << ListLoc[i].backlok << " ";
			cout << ListLoc[i].nextlok << endl;
			index = i;
			break;
		}
	}

	int k = 0;

	while (true)
	{
		cin >> k;
		if (k == 2)
		{
			stepan.loca = ListLoc[index].nextlok;

		}
		else if (k == 1)
		{
			stepan.loca = ListLoc[index].backlok;
		}


		for (int i = 0; i < ListLoc.size(); i++)
		{
			if (stepan.loca == ListLoc[i].loc)
			{
				cout << ListLoc[i].nam << " ";

				cout << ListLoc[i].loc << " ";
				cout << ListLoc[i].backlok << " ";
				cout << ListLoc[i].nextlok << endl;
				index = i;
				break;
			}
		}

		if (k == 0)
			break;
	}


	//cout << backlok
}
