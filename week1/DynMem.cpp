/*********************************************************************
 ** Program Filename: DynMem.cpp
 ** Author: Cierra Shawe
 ** Date: 7/7/15
 ** Description: Demo of dynamic memory allocation for cs162 - Su15
 ** Input:
 ** Output:
 *********************************************************************/

#include <iostream>

using namespace std;

/*********************************************************************
 ** Function: init
 ** Description: Initializes the memory of the 2-d array
 ** Pre-Conditions: x & y > 0
 *********************************************************************/
int **init(int x, int y){

    int **temp;

    temp = new int*[y]; // creating first chunk of memory

    for(int i = 0; i < y; i++)
        temp[i] = new int[x]; // creating the rest

    return temp; //returning the new array

}


/*********************************************************************
 ** Function: Fill
 ** Description: Fills the empty array with 0's
 ** Parameters: This is using call by reference to modify contents of array
 *********************************************************************/
void fill(int **&arr, int x, int y){

    int c = 0; // just a counter variable

    for (int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            arr[i][j] = c; // initializing array to be all 0's
            //c++; // This would be to count up from 0
        }
    }

}


/*********************************************************************
 ** Function: print
 ** Description: Prints out the contents of the array
 *********************************************************************/
void print(int **array, int x, int y){

    for(int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

}

/*********************************************************************
 ** Function: remove
 ** Description: Removes the allocated memory
 *********************************************************************/
void remove(int **&arr, int y){

    for(int i = 0; i < y; i++)
        delete(arr[i]); // deleting the little fingers of the array

    delete(arr); // deleting the array

}


/*********************************************************************
 ** Function: main
 ** Description: No main, no game. (required for program to run)
 *********************************************************************/
int main(){

    int **array;
    int x;
    int y;

    /* Taking in size of array */
    cout << "Please enter an x value: ";
    cin >> x;
    cout << "Pleaes enter a y value:  ";
    cin >> y;
    cout << endl;

    array = init(x, y); // array is returned here, we now have allocated memory
    fill(array, x, y); // putting all 0's in the array
    print(array, x, y); // printing out the array
    remove(array, y); //frees the memory that was allocated

    return 0;
}
