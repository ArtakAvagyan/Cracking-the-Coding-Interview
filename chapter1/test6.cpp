#include <iostream>
#include <string>
std::string Comperession(const std::string& str)
{
        std::string result;
        int count = 1;
        char tmp = str[0];
        for(int i = 1 ; i <= str.size();++i)
        {
                if(tmp == str[i]){count++;}
                else
                {
                        result.push_back(tmp);
                        result.push_back((char)(count+'0'));
                        tmp = str[i];
                        count = 1;
                }
        }
	return result;
}
int main()
{
        std::string str;
        getline(std::cin,str);
       	std::cout<< Comperession(str) <<std::endl;
	return 0;
}

