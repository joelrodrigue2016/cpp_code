/******************************************************************************



*******************************************************************************/

#include <iostream>
#include <iostream>
#include <iomanip>
#include <string>
#include <valarray>
#include <numeric>
#include <ctime>
#include <cstdlib>
#include <math.h>
#include <algorithm>
using namespace std;

int variance(double a[], double n)
{
    // Compute mean (average of elements)
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    double mean = (double)sum / (double)n;

    // Compute sum squared
    // differences with mean.
    double sqDiff = 0;
    for (int i = 0; i < n; i++)
        sqDiff += (a[i] - mean) * (a[i] - mean);
    return sqDiff / n;
}

double
standardDeviation(double arr[], double n)
{
    return sqrt(variance(arr, n));
}

template <typename T, size_t N>
const T *
mybegin(const T (&a)[N])
{
    return a;
}

template <typename T, size_t N>
const T *
myend(const T (&a)[N])
{
    return a + N;
}

double
Median(double a[], int n)
{
    // First we sort the array
    sort(a, a + n);

    // check for even case
    if (n % 2 != 0)
        return (double)a[n / 2];

    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}

int main()
{
    double b;
    double a[] = {46, 69, 32, 60, 52, 41};

    int length = sizeof(a);
    int len = *(&a + 1) - a;

    for (int i = 0; i < len; i++)
    {
        b += a[i];
    }

    int n = sizeof(a) / sizeof(a[0]);

    // int arr[] = {600, 470, 170, 430, 300};

    // cout << "The amount of numbers is: " << len << endl;

    cout << "+---------------------------------+" << endl;
    // cout << "The amount of numbers is: " << length << endl;
    cout << "The sum of all the values is: " << b << endl;
    cout << "The average is: " << ((b) / len) << endl;
    cout << "The Min value is: " << *min_element(mybegin(a), myend(a)) << '\n';
    cout << "The Max value is: " << *max_element(mybegin(a), myend(a)) << '\n';
    cout << "The Median value is: " << Median(a, n) << endl;
    cout << "The Variance is: " << variance(a, n) << "\n";
    cout << "The Standard Deviation is: " << standardDeviation(a, n) << "\n";

    cout << "+---------------------------------+" << endl;

    return 0;
}