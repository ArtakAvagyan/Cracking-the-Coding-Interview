#include <iostream>

int** reversMatrix(int** arr , int size)
{
	int ** tmp = new int*[size];
	for(int i = 0 ; i < size ; ++i)
	{
		tmp[i] = new int [size];
	}
	for(int i = 0 ; i < size ; ++i)
	{
		for(int j = 0 ; j < size ; ++j)
		{
			tmp [j][i] = arr[i][j];
		}
	}
	for(int i = 0 ; i < size ; ++i)
		delete[]arr[i];
	delete[]arr;
	return tmp;
}
int main()
{
	int size = 3;
	int **arr = new int*[size];
	for(int i = 0 ; i < size ; ++i)
	{
		arr[i] = new int[3];
	}
	for(int i = 0 ; i < size; ++i)
		for(int j = 0 ; j < size;++j)
			std::cin>>arr[i][j];
	
	arr = reversMatrix(arr,size);
	for(int i = 0 ; i < size; ++i)
	{
		std::cout<<std::endl;
		for(int j = 0 ; j < size;++j)
			std::cout<<arr[i][j] << "  ";
	}
	for(int i = 0; i < size ; ++i)
	{
		delete[]arr[i];
	}
	delete[]arr;
}
