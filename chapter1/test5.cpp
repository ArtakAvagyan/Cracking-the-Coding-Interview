#include <iostream>
#include <string>
bool is_sub(std::string& str, std::string& str2)
{
	for(int i = 0 ; i < str2.size();++i)
	{
		std::string tmp = str;
		tmp.erase(i,1);
		if(tmp == str2){return true;}
	}
	return false;
}
bool is_pox(std::string& str, std::string& str2)
{
	for(int i = 0 ; i < str2.size();++i)
	{
		std::string tmp = str2;
		std::string tmp2 = str;
		tmp.erase(i,1);
		tmp2.erase(i,1);
		if(tmp == tmp2){return true;}
	}
	return false;

}

bool oneAway(std::string& str , std::string& str1)
{
	if(str.size() == str1.size())
	{
		return is_pox(str,str1);
	}
	else if(str.size()-1 == str1.size())
	{
		return is_sub(str,str1);
	}
	else
	{
		return is_sub(str1,str);
	}

}
int main()
{
	std::string str;
	std::string str1;
	std::cin>> str >> str1;
	std::cout<<oneAway(str,str1)<<std::endl;
}
