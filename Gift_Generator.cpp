#include <bits/stdc++.h>

std::string to_string(int number){
    std::string ns = "";
    char oc;
    int on = 0;
    while(true){
        on = number % 10;
        switch(on){
            case 0: oc = '0'; break;
            case 1: oc = '1'; break;
            case 2: oc = '2'; break;
            case 3: oc = '3'; break;
            case 4: oc = '4'; break;
            case 5: oc = '5'; break;
            case 6: oc = '6'; break;
            case 7: oc = '7'; break;
            case 8: oc = '8'; break;
            case 9: oc = '9'; break;
            //default : ErrorHandling("Trouble converting number to string.");
        }
        number -= on;
        ns = oc + ns;
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
	// Inserting Gifts data
	ofs.open("Gifts.csv", std::ios::trunc);
	int i;
	for(i = 1; i < 200;i++)
	{
		std::string s = std::string("gift") + to_string(i);
		int price = rand() % 100 + 1;
		int value = rand() % 10 + 1;
		int type = rand() % 3+ 1;
		int uc_ld, uv_lr;
		if(type == 1)
		{
			uc_ld = -1;
			uv_lr = -1;
		}
		else
		{
			uc_ld = rand() % 10 + 1;
			uv_lr = rand() % 10 + 1;
		}
		ofs << s << " , " << price << " , " << value << " , " << type << " , " << uc_ld << " , " << uv_lr << "\n";
	}
	std::string s = std::string("gift") + to_string(i);
	int price = rand() % 101 + 1;
	int value = rand() % 10 + 1;
	int type = rand() + 1;
	int uc_ld, uv_lr;
	if(type == 1)
	{
		uc_ld = -1;
		uv_lr = -1;
	}
	else
	{
		uc_ld = rand() % 10 + 1;
		uv_lr = rand() % 10 + 1;
	}
	ofs << s << " , " << price << " , " << value << " , " << type << " , " << uc_ld << " , " << uv_lr;
	return 0;
}
