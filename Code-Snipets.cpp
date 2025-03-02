#include <iostream>
using namespace std;

void displayMatrix(char **matrix, int width , int height)
{
    for(int i = 0 ; i < width ; i ++)
    {
        for(int j = 0 ; j < height ; j ++)
        {   
            std :: cout << *(*(matrix+i) + j);
        }
    }
}