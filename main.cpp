#include <iostream>
using namespace std;
int main(){

    int size, i, smallest; //declaring variables

    //get the array size and store it
    cout << "Enter Number of Elements in Array\n"; 
    cin >> size;
    if (size > 0)
   {
        cout << "Enter " << size << " numbers \n"; // get the elements
        int arr[size]; 
        for(i = 0; i < size; i++)  // Read the array elements and store them
        {
            cin >> arr[i];
        }
        smallest = arr[0];    // set smallest = first element 
        for(i = 1; i < size; i++)   // search for the smallest through the array
       {
             if(arr[i] < smallest) // if the current element is less than the smallest
            {
                   smallest = arr[i]; // set smallest = current element
            }
        }
    
        // display the smallest number
         cout  << "Minimum Element\n" << smallest;
      }
      // end
     return 0;
}
