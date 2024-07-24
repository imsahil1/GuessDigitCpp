#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Guess{
    public:
        void game();
};

void Guess::game()
{
    int N = 100;
    int GuessDigit;
    int UserGuess;
    srand(time(0));


    GuessDigit = rand() % N; // rand() genrated a value and stored in GuessDigit
    cout<<"Hello User Guess the Digit :) ";
    cin>>UserGuess;

    int i=4;
    while(i>0)
    {   
        if(UserGuess == GuessDigit)
        {   
            cout<<"Your Guess it Right :) "<<GuessDigit<<endl;
            return;
        }
        else if(UserGuess < GuessDigit)
            cout<<"The Guess Digit is Low"<<endl;
        else 
            cout<<"The Guess Digit is High"<<endl;
        
        cout<<i<<" chance left guess again :) ";
        cin>>UserGuess;
        i--;

    }
    cout<<"You Lost All the chance Better luck next Time :)";
}

int main()
{   
    Guess g;
    g.game();
    return 0;
}
