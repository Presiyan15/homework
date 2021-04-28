#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{


    cout << "Guess My Number Game\n\n";
    cout<<"Your next two numbers should be the borders of my choose";

    int downBorder, upBorder;

    cin>>upBorder;
    cin>>downBorder;


    srand(time(0)); //seed random number generator
    int num = rand() % (upBorder + 1 -downBorder) + downBorder; // random number between 1 and 100

    int guess = 0;
    int counter = 1;
    int replacer = num;

    while (guess != num) {
        cout << "Enter a guess between "<<downBorder<<" and "<<upBorder;
        cin >> guess;

        if (guess==0){

            cout<<"That's the end of the game, you tried "<<counter<<" times";
            break;

        }
        else if (counter==6){

            int timesOfCircles = 0;
            while(replacer!=0){
                int currentFactor = replacer%10;
                if (currentFactor==0||currentFactor==6||currentFactor==9)
                {

                    timesOfCircles++;
                }
                else if (currentFactor==8){
                    timesOfCircles+=2;

                }


                replacer /= 10;
            }
            cout<<"My number has "<<timesOfCircles<<" circles\n\n";

        }
        else{
                       if (guess > num) {
            cout << "Too high!\n\n";
                }
             else if (guess < num)
            {
                cout << "Too low!\n\n";
            }
            else {
            cout << "\nCorrect! You got it in ";
            cout<<"\nYou win with "<<counter<<"tries";
            }
        }
        counter++;
    }

    return 0;
}
