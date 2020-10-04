#include <bits/stdc++.h> 
using namespace std; 
#define lli long long int

// function which finds repeating elements
void printRepeating(lli arr[], lli size) 
{  
cout << "The repeating elements are:" << endl; 
 for (int i = 0; i < size; i++) 
 { 
     if (arr[abs(arr[i])] >= 0) 
      arr[abs(arr[i])] = -arr[abs(arr[i])]; // Marking current element as negative
     else
      cout << abs(arr[i]) << " "; 
 } 
} 
  
// Main Function
int main() 
{ 
    int arr[] = {1, 2, 3, 1, 3, 6, 6}; // input array of integers
    int arr_size = sizeof(arr)/sizeof(arr[0]); // Size of array
    printRepeating(arr, arr_size); // calling the printRepeating function
    return 0; 
} 
