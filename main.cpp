//
//  main.cpp
//  test
//
//  Created by reuben on 11/12/16.
//  Copyright (c) 2016 reuben. All rights reserved.
//

#include <iostream> 
#include <cstring> 
#include <vector> 
#include <algorithm> 

using namespace std;
using std::vector;


//Function findMode

vector<int> findMode(int inpt[], int size) {
int frequency = 0; // how often they occur
int index = 0; // held values int maxIndex = 0; // set max of index
int countArray[size]; // count the numbers in the array and return size int max = countArray[0]; // set max of array
int numArray[size]; // the input array and size int data = inpt[0]; // data holding input information
// determine frequency

    for(int i = 0; i < size; i++) // loop through discovering frequency
    {

    if(data == inpt[i]) { frequency++; }
else {
    numArray[index] = inpt[i]; countArray[index] = frequency; frequency = 0; data = inpt[i];
}
} // determine max
for(int M = 1; M < size; M++) // M = new max number {
if(max < countArray[M]) { max = countArray[M]; maxIndex = M; }
} vector<int> v1;
if(countArray[0] == 0 && maxIndex == 0) { for(int m = 0; m < size; m++)
{ v1.push_back(numArray[maxIndex]); } // undeclared value
}
else {
    v1.push_back(numArray[maxIndex]);
}

for(int i = 0; i < (int)v1.size(); i++) return v1;
}
int main() { return 0; }
}
