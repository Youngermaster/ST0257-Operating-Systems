#include <iostream>

using namespace std;

int main() {
    int sumatory = 0;
    float arr[10];
    for (int i = 0; i < 10; i++)
        arr[i] = i;

    for (int i = 0; i < 11; i++)
        sumatory += arr[i];

    // * If we run this project several times, we will get different results, what is odd.
    cout << "The sumatory is: " << sumatory << endl;
}