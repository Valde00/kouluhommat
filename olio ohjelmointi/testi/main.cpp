#include <iostream>
#include <cstdlib>
using namespace std;

int game(int maxNum)
{
    int guesses = 0;
    int playerNum = -1;
    std::srand(17);
    int randNum = std::rand() % maxNum;
    while(randNum != playerNum)
    {
        cout << "Anna luku." << endl;
        cin >> playerNum;
        if(playerNum < randNum)
        {
            cout << "Luku on suurempi" << endl;
        }
        else if(playerNum > randNum)
        {
            cout << "Luku on pienempi" << endl;
        }
        else
        {
            cout << "oikea vastaus" << endl;
        }
        guesses++;
    }
    return guesses;
}

int main()
{
    int guesses = game(30);
    cout << "Arvausten maara: " << guesses << endl;
    return 0;
}
