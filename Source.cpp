
#include <iostream>
#include <stdio.h>
using namespace std;

// Your First C++ Program

int main(int argc, char **argv)
{
    double distance;
    double time;

    cout << "Enter your distance: ";
    cin >> distance;

    cout << "Enter your time: ";
    cin >> time;

    cout << "your velocity is " << distance / time;

    cout << " m/s\n";

    system("pause");
    return 0;
}
