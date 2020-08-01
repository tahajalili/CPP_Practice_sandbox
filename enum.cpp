#include <iostream>

using namespace std;

void add10(int* a, int* b)

{
    *a = *a + 10;
    *b = *b + 10;

    cout << "a: " << *a << endl;
    cout << "b: " << *b << endl;
}

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
    