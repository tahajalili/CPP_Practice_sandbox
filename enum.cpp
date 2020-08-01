#include <iostream>

using namespace std;

namespace choices
{
    enum myChoice 
    { 
        EASY,
        MEDIUM,
        HARD
    };
}

int main(int c, char** argv)
{
    choices::myChoice n;

    int i = -1;

    // ...<present the user with a menu>...

    cin >> i;

    switch(i)
    {
        case choices::EASY:
            cout << "Easy\n";
            break;
        case choices::MEDIUM:
            cout << "Medium\n";
            break;
        case choices::HARD:
            cout << "Hard\n";
            break;
        default:
            cout << "Invalid Selection\n";
            break;
    }

}
    
