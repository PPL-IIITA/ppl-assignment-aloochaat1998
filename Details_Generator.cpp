#include <bits/stdc++.h>

std::string to_string(int number){
	std::string ns = "";
	char och;
	int on = 0;
	while(true)
	{
		on = number % 10;
		switch(on){
			case 0: och = '0'; break;
			case 1: och = '1'; break;
			case 2: och = '2'; break;
			case 3: och = '3'; break;
			case 4: och = '4'; break;
			case 5: och = '5'; break;
			case 6: och = '6'; break;
			case 7: och = '7'; break;
			case 8: och = '8'; break;
			case 9: och = '9'; break;
		}
		number -= on;
		ns = och + ns;
		if(number == 0){
			break;
		}
		number = number/10;
	}
	return ns;
}

int main()
{
	std::ofstream ofs;
	srand(time(NULL));
	// Inserting Boys data
	ofs.open("Boys.csv", std::ios::trunc);
	int i;
	for(i = 1; i < 15; i++)
	{
		std::string s = std::string("b") + to_string(i);
		int attraction = rand() % 101 + 1;
		int intelligence = rand() % 101 + 1;
		int budget = rand() % 900 + 100;
		int attraction_required = rand() % 101 + 1;
		int type = rand() % 3 + 1;
		ofs << s << " , " << attraction << " , " << intelligence << " , " << budget << " , " << attraction_required << " , " << type << "\n";
	}
	{
		std::string s = std::string("b") + to_string(i);
		int attraction = rand() % 101 + 1;
		int intelligence = rand() % 101 + 1;
		int budget = rand() % 900 + 100;
		int attraction_required = rand() % 101 + 1;
		int type = rand() % 3 + 1;
		ofs << s << " , " << attraction << " , " << intelligence << " , " << budget << " , " << attraction_required << " , " << type ;
	}
	ofs.close();
	ofs.open("Girls.csv", std::ios::trunc);
	for(i = 1; i < 15; i++)
	{
		std::string s = std::string("g") + to_string(i);
		int attraction = rand() % 101 + 1;
		int intelligence = rand() % 101 + 1;
		int budget = rand() % 900 + 100;
		int type = rand() % 3 + 1;
		ofs << s << " , " << attraction << " , " << intelligence << " , " << budget << " , " << type << "\n";
	}
	{
		std::string s = std::string("g") + to_string(i);
		int attraction = rand() % 101 + 1;
		int intelligence = rand() % 101 + 1;
		int budget = rand() % 900 + 100;
		int type = rand() % 3 + 1;
		ofs << s << " , " << attraction << " , " << intelligence << " , " << budget << " , " << type;
	}
	return 0;
}
