#include <iostream>
#include <climits>
using namespace std;



int main()
{
    int arr[6] = {5,15,22,1,-5,24};
    //find the smallest number
    int smallest = INT_MAX;
    for(int i=0; i<6; i++) {
        if(smallest > arr[i]) {
            smallest = arr[i];
        }
    }
    cout << smallest << endl;
    

    //TO find the largets number
    int largest = INT_MIN;
    for(int i=0; i<6; i++) {
        if(largest < arr[i]) {
            largest = arr[i];
        }
    }
    cout << largest;
    return 0;
}