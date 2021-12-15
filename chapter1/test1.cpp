#include <iostream>

bool is_unique(const std::string& str)
{
	int unique[8]{};
	for(int i = 0 ; i < str.size();++i)
	{
		if(unique[str[i]%8] & 1 << str[i]/8){return false;}
		unique[str[i]%8] |= 1 << str[i]/8;
	}
	return true;
}



int main()
{
	std::string str;
	std::cin>> str;
	std::cout<< is_unique(str) << std::endl;

}
