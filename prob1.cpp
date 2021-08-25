#include <iostream>
#include <string>

using namespace std;

// Implement printArray here
void printArray(int myarray[], int n){
  for(int i = 0; i < n; i++){    // goes through the array and prints it
    cout << myarray[i] << " ";
  }
  cout << endl;
}

// Implement getElement here
int getElement(int myarray[], int n){
  int largest, second;
  if(myarray[0]<myarray[1]){
     largest = myarray[1];
     second = myarray[0];
  }
  else{
     largest = myarray[0];
     second = myarray[1];
  }
  for (int i = 2; i< n ; i ++) {
     /* If the current array element is greater than largest
      * then the largest is copied to "second" and the element
      * is copied to the "largest" variable.
      */
     if (myarray[i] > largest) {      // if the element in the array that we are hovering over is greater than the largest. then the second largest is now what the largest used to be.
        second = largest;             //second largest is now the previous largest element
        largest = myarray[i];         //largest is the element we hovering
     }
     /* If current array element is less than largest but greater
      * then second largest ("second" variable) then copy the
      * element to "second"
      */
     else if (myarray[i] > second && myarray[i] != largest) {
        second = myarray[i];
     }
   }
   return second;
 }

// EDIT CODE BELOW ONLY FOR TESTING (YOUR CODE WILL BE GRADED WITH DIFFERENT TESTS)

int main() {
  {
    int myarray[100] = {30, 20, 5, 10, 25};
    int n = 5;
    cout << "Contents of array : ";
    printArray(myarray, n);
    if (getElement(myarray, n) == 25)
	  cout << "PASSED" << endl;
	else
	  cout << "Result did not match expected answer: 25" << endl;
  }
  {
    int myarray[100] = {15, 24, 30, 10, 5};
    int n = 5;
    cout << "Contents of array : ";
    printArray(myarray, n);
    if (getElement(myarray, n) == 24)
	  cout << "PASSED" << endl;
	else
	  cout << "Result did not match expected answer: 24" << endl;
  }
  return 0;
}
