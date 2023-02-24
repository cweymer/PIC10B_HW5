/*
PIC 10B Homework 5, find_major_element.cpp
Author: Charlotte Weymer
UID: 005760636
Discussion Section: 2A
Date: 02/24/2023
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMajorityElement(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int n = v.size()/2; //defines threshold for majority element
        int count;
        for (int j = 0; j < v.size(); j++)
        {
            count = 0; //resets count every loop
            if (v[j] == v[i])
            {
                count++; //increments if a matching element is found in the vector to the ith element
            }
        }
        if (count > n) //returns the element if appears more than n/2 times
        {
            return v[i];
        }
    } 
    return 0;
}
int main()
{
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    vector<int> input;
    int element;
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++)
    {   cin >> element;
        input.push_back(element);
    }
    int result =  findMajorityElement(input);
    cout << "The Majority Element is: " << result << endl;
    
    return 0;
}