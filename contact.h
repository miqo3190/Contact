#include <string>
#include <fstream>
#include <iostream>
#include <vector>

class Kontact
{
public:
	Kontact();
	void avelKont();
	void jnjelKont(int);
	void gtnelKont(std::string);
private:
	std::string anun;
	std::string azganun;
	int hamar;
	std::ofstream f1;
	std::fstream f2;
	char symbol;
	std::string str;
	std::vector<std::string>vec;
};
