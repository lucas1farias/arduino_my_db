

#include <iostream>
using namespace std;

int main() {
  // Declare an integer array of size 5
  int arr[5];

  // Initialize the elements of the array
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  arr[3] = 40;
  arr[4] = 50;

  // Accessing and printing the elements of the array
  cout << "Elements of the array are: ";
  for(int i=0; i<5; i++) {
    cout << arr[i] << " ";
  }

  // Indicate that the program has executed successfully
  return 0;
}
