#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    cout<<"Hello, this is my Toy game. If you want to understand how much will your constructor cost, please type its height and width. After that you will have to type how many cubes are there."<<endl;
    cout<<"Type height and width: ";

    int height, width;

    cin>>height>>width;

    int matrix[height][width];

    int sumArea = 0;

    for (int i=0; i < height; i++)
    {
        for (int k=0; k < width; k++)
        {
            if (k==0){
                cout<<"Write the number of cubes: ";
            }
            int number;
            cin >> number;

            int defaultValue = 6*number - (number-1)*2;

            matrix[i][k] = number;

            if (i == 0&&k==0)
            {
                sumArea += defaultValue;
            }
            else if(i==0)
            {
                sumArea += defaultValue - 2*min(number, matrix[i][k-1]);
            }
            else if (k==0)
            {
                sumArea += defaultValue - 2*min(number, matrix[i-1][k]);
            }
            else
            {
                sumArea += defaultValue - 2*min(number, matrix[i][k-1])-2*min(number, matrix[i-1][k]);
            }



        }

    }
    cout<<"The present costs: "<<sumArea<<"lv.";


    return 0;
}
