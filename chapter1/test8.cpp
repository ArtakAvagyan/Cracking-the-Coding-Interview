#include <iostream>
#include <vector>
#include <algorithm>
void editVector(std::vector<std::vector<int>>&vec)
{
	for(int i = 0 ; i < vec.size();++i)
	{
		for(int j = 0; j < vec[i].size();++j)
		{
			if(vec[i][j] == 0)
			{
				std::for_each(vec[i].begin(),vec[i].end(),[&](int& elem){elem = 0;});
				for(int k = 0; k < vec.size() ; ++k)
				{
					vec[k][j] = 0;
				}
			}
		}
	}
}

int main()
{
	std::vector<std::vector<int>>vec;
	for(int i = 0 ; i < 3 ; ++i)
	{
		std::vector<int>tmp;
		tmp.reserve(3);
		for(int j = 0 ; j < 3;++j)
		{
			int t;
			std::cin>> t;
			tmp.push_back(t);
		}
		vec.push_back(tmp);
	}
	editVector(vec);
	for(int i = 0 ; i < vec.size();++i)
	{
		std::cout<<std::endl;
		for(int j = 0 ; j < vec.size() ; ++j)
			std::cout<< vec[i][j]<<' ';
	}

}
