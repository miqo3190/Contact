#include "contact.h"

Kontact::Kontact()
{
	
}
void Kontact::avelKont()
{
	std::cout << "Please enter  name : ";
	getline(std::cin, anun);
	std::cout << "\n Please enter  surname : ";
	getline(std::cin, azganun);
	std::cout << "\n Please enter  nuber : ";
	std::cin >> hamar;
	f1.open("text.txt" , std::ofstream::app);
	f1 << anun;
	f1 << " ";
	f1 << azganun;
	f1 << " ";
	f1 << hamar;
	f1 << "\n";
	f1.close();
}
void Kontact::jnjelKont(int tox)
{
	f2.open("text.txt");
	while (!f2.eof())
	{
		f2.get(symbol);
		str.push_back(symbol);
		if (symbol == '\n')
		{
			vec.push_back(str);
			str = "";
		}
	}
	f2.close();
	vec.erase(vec.begin()+tox-1);
	f1.open("text.txt");
	for(int i=0;i<vec.size();++i)
	{
		f1 << vec[i];
	}
}
void Kontact::gtnelKont(std::string name)
{
	f2.open("text.txt");
	while (!f2.eof())
	{
		f2.get(symbol);
		if (symbol != ' ' && symbol != '\n')
		{
			
			str.push_back(symbol);
		}
		else 
		{
			vec.push_back(str);
			str = "";
		}
	}
	f2.close();
	for (int i = 0; i < vec.size(); ++i)
	{
		if (name == vec[i])
		{
			std::cout << "Surname : " << vec[i + 1] << " Number : " << vec[i + 2] << std::endl;
		}
	}
}
