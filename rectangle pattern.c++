#include <iostream>
using namespace std;
int main()
{
    int height, width;
    char symbol;

    cout << "Enter the height of the rectangle : " << endl;
    cin >> height;

    cout << "Enter the width of the rectangle : " << endl;
    cin >> width;

    cout << "Enter the character to print the rectangle : " << endl;
    cin >> symbol;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << symbol<< " ";
        }
        cout << endl;
    }
}
