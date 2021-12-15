#include <iostream>
bool is_sub(std::string str,std::string str2)
{
	if(str.size() != str2.size()){return false;}
	for(int i = 0 ; i < str.size();++i)
	{
		str.push_back(str[0]);
		str.erase(0,1);
		if(str == str2){return true;}
	}
	return false;
}

int main()
{
	std::string str1;
	std::string str2;
	std::cin>> str1 >> str2;
	std::cout<< is_sub(str1,str2)<<std::endl;
	return 0;
}
