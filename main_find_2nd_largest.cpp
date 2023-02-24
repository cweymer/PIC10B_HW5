/*
PIC 10B Homework 5, main_find_2nd_largest.cpp
Author: Charlotte Weymer
UID: 005760636
Discussion Section: 2A
Date: 02/24/2023
*/
#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n)
{
    if (n < 2) //returns 1 if the array is smaller than size 2
    {
        return -1;
    }
    int largest = INT_MIN; //defines largest (guarantees replacement by an element in arr)
    int second_largest = INT_MIN; //defines second largest
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest) //bumps second largest and largest up if largest element is found
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) //bump second largest up if a larger element is found
        {
            second_largest = arr[i];
        }
        else {
            //resolves dangling else
        }
    }
    if (second_largest == INT_MIN)
    {
        //occurs if all elements are same value according to spec
        return -1;
    }
    return second_largest; //returns solution
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[1000]; // assuming user input n <=1000
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int result = findSecondLargest(arr, n);
    if (result == -1)
        cout << "Array has fewer than two elements." << endl;
    else
        cout << "The second largest element is: " << result << endl;
    return 0;
}