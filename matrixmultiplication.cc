#include <iostream>

#define X 3
#define Y 3


int main()
{
	
	double** A = new double*[X];
	double** B = new double*[X];
	double** res= new double*[X];;

	
	for (int i = 0; i < X; i++)
		A[i] = new double[Y];

	
	for (int i = 0; i < X; i++)
		for (int j = 0; j < Y; j++)
			A[i][j] = rand() % 100;

	
	std::cout<<"values of A"<<std::endl;;
	for (int i = 0; i < X; i++)
	{
		for (int j = 0; j < Y; j++)
			std::cout <<A[i][j] << " ";

		std::cout << std::endl;
	}
	
	for (int i = 0; i < X; i++)
		B[i] = new double[Y];

	
	for (int i = 0; i < X; i++)
		for (int j = 0; j < Y; j++)
			B[i][j] = rand() % 100;
		
	std::cout<<"values of B"<<std::endl;;
	for (int i = 0; i < X; i++)
	{
		for (int j = 0; j < Y; j++)
			std::cout << B[i][j] << " ";

		std::cout << std::endl;
	}
	
	for(int i = 0; i < X; i++)
        for(int j = 0; j < Y; j++)
        {
            res[i]=new double[Y];
        }

for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
			
			for( int k=0; k<Y; k++){
				res[i][j]+=A[i][k]*B[k][j];
			}
}}
		
           

	std::cout<<"values of res"<<std::endl;;
	for (int i = 0; i < X; i++)
	{
		for (int j = 0; j < Y; j++)
			std::cout << res[i][j] << " ";

		std::cout << std::endl;
	}
	
	
	return 0;
}