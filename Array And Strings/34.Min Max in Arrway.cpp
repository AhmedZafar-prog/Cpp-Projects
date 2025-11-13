#include <iostream>
using namespace std;

int main() {
    int range;
    cout << "Enter the number of elements: ";
    cin >> range;

    int a[range];
    int sum = 0;

   
    cout << "Enter " << range << " numbers:\n";
    for (int i = 0; i < range; i++) {
        cin >> a[i];
    }


    int max = a[0];
    int min = a[0];


    for (int i = 0; i < range; i++) {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];

        sum += a[i];
    }

    float average = (float)sum / range;

    cout << "\nMaximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;
    cout << "Average value: " << average << endl;

    return 0;
}
