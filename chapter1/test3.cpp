#include <iostream>
#include <string>
void URLify(std::string& str)
{
        while(str[str.size()-1]== ' '){str.pop_back();}
        while(1)
        {
        auto it = str.find(' ');
        if(it > str.size()){return ;}
        str.erase(it,1);
        str.insert(it,"%20");
        }
}

int main()
{
	std::string str ;
	std::cin>> str;
	URLify(str);
	std::cout<< str<<std::endl;

}
