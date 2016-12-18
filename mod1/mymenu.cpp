/********************************************************************************** 

**  Program Filename : mymenu.cpp

**	Author: Woohyuk Yang

**  Date: April. 29th. 2016

** Description: CS162 menu function source file

** Input : various
** Output :applicable to some programs
************************************************************************************/
#include "mymenu.hpp"
/********************************************************************* 
** Function : ShowMenu()
** Description : A function showing menus.** Parameters : none
** Pre-Conditions : none
** Post-Conditions : showing the menu to the user being able to proceed to the next level of program
*********************************************************************/
void ShowMenu()
{
  while(1)
  {
    int choose;
    cout << "chose the number(function) you want to check" << endl;
    cout << "1. Reversing the string" << endl;
    cout << "2. Getting the sum of array" << endl;
    cout << "3. Getting the triangle number" << endl;
    cout << "4. quit the program" << endl;

    cin >> choose;

    while(cin.fail() || ((choose != 1) && (choose != 2) && (choose != 3) &&(choose !=4))) //invalidating the input value
    {
        cin.clear();
        cin.ignore(100000000, '\n');
        cout << endl << "invalid! input proper number" << endl << endl;
        cin >> choose;
        
    }

    if(choose == 1) // reversing the string 
    {
        string a;
        cout << "input string" << endl;
        cin.get();
        getline(cin, a);
        
        RevString(a);
    
      }
    
	
	else if(choose == 2) // getting the sum of the array
    {
     
     #if 1
     int count = 0;
     int n = 0;
     int number;
     int position;
      cout << "how many numbers will you store? input the number" << endl;
      cin >> n;

    while(cin.fail() || (n == 0)) //invalidating the input value
    {
        cin.clear();
        cin.ignore(100000000, '\n');
        cout << endl << "invalid! input proper number" << endl << endl;
        cin >> n;
        
    }


     int *p = new int[n];
  
        cout << endl << "input numbers as many as you typed before" << endl;      
    
      while(count < n)
      {
        cout << endl << "input the number and press enter" << endl;      
        cin >> number;
        cin.get();
        
        while(cin.fail()) //invaliating the input value
        {
        cin.clear();
        cin.ignore(100000000, '\n');
        cout << endl << "invalid! input proper number" << endl << endl;
        cin >> number;
        }
        
        
        p[position] = number;
        count++;
        position++;
      }

    

     cout << endl << "The sum of array is " << ArraySum(p, n) << endl << endl;;

    #endif
    }
   
   
   
   
   
   
   
   
   else if(choose == 3) //getting the triangular number
    {


    int num;
    cout << "input the number to get a triangle number" << endl;
    cin >> num;
    cout << "Triangle number is " << TriNumber(num) << endl;  
      
      
      
      
   }
   else if(choose ==4 ) //finishing the program
   {
        cout << "program end" << endl;
        break;
   }

  }

}
void Resize()
{






}
/********************************************************************* 
** Function : RevString()
** Description : A function reversing the string
** Pre-Conditions : string a
** Post-Conditions : showing the reversed string of the string the user would type in.
*********************************************************************/
void RevString(string a)
{

    int n = a.size();
   

    if(n == 1)
    cout << a << endl;
    else
    {
     
             cout << a[n-1];
            string b = a.substr(0, n - 1);
 			 RevString(b);          
    }
}




/********************************************************************* 
** Function : ArraySum 
** Description : A function showing the sum of array
** Pre-Conditions : int arr[], and int n
** Post-Conditions : showing the sum of array which the user would type in
*********************************************************************/
int ArraySum(int arr[], int n)
{
    int sum;
    if(n == 0)
    sum = arr[0];
    else if(n>0)
    {   int temp = arr[n-1];
        arr[n-1] = 0;
        sum = temp + ArraySum(arr, n-1);
    }

    return sum;


}


/********************************************************************* 
** Function : TriNumber
** Description : A function showing the triangular number for Row r
** Pre-Conditions : int r
** Post-Conditions : showing the triangular numbers
*********************************************************************/
int TriNumber(int r)
{
    if(r==0)
        return 0;
    else if( r == 1)
        return 1;
    else
    {
        int result  = r + TriNumber(r-1);

        return result;
    } 


}

