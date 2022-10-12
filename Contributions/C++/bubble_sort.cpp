#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[40], i, n, j, temp;
    cout << "Enter the number of elements in the arrray: " << endl;
    cin >> n;
    cout << "Enter the array elements: "<<endl;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "The sorted array is: "<<endl;
    for (i = 1; i <= n; i++)
        cout << " " << a[i];

    return 0;
}