#include <iostream>


bool is_permutetion(const std::string& str1 , const std::string& str2)
{
        if(str1.size()!= str2.size()){return false;}
        unsigned int perm1[8]{0,0,0,0,0,0,0};
        unsigned int perm2[8]{0,0,0,0,0,0,0};
        for(int i = 0 ; i < str1.size(); ++i)
        {
                perm1[str1[i]%4] |= 1<< (str1[i] / 4);
                perm2[str2[i]%4] |= 1<< (str2[i] / 4);
                std::cout<< perm1[str1[i]/4] << "   " << perm2[str2[i]/4]<<std::endl;
        }
        for(int i = 0 ; i < 4 ; ++i)
        {
                if(perm1[i] != perm2[i])
                {
                        return false;
                }
        }
        return true;
}

int main()
{
	std::string str1;
	std::string str2;
	std::cin>> str1 >> str2;
	std::cout<< is_permutetion(str1,str2)<<std::endl;
	return 0;
}
