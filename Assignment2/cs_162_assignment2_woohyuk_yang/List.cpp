/********************************************************************************** 

**  Program Filename : List.cpp

**	Author: Woohyuk Yang

**  Date: April. 25th. 2016

** Description: CS162 Assignment2

** Input : grocery shopping items and lists of those items. 

** Output : a grocery shopping list program 
************************************************************************************/

#include "List.hpp"
#include <stdio.h>
/********************************************************************* 
** Function : List Constructor
** Description : A constructor for a List class
** Parameters : none
** Pre-Conditions : setting default capacity for the list
** Post-Conditions : making a list composed of 4 pointer variables pointing to ltem objects
					 setting emptyPos to 1.
*********************************************************************/
List::List() //where initial 4 capacity list is made
{
    capacity = DEFAULT;
    pItem = new Item*[capacity];
    for(int i = 0; i < capacity; i++)
	{
		pItem[i] = new Item;
	}

    emptyPos = 1; 


}
/********************************************************************* 
** Function : List distructor
** Description : A distructor for a List class
** Parameters : none
** Pre-Conditions : List constructor
** Post-Conditions : destructing List object.
*********************************************************************/
List::~List() //deallocating the list
{
    for(int i; i <capacity; i++)
    delete pItem[i];

    delete pItem;
}

/********************************************************************* 
** Function : ShowMenu()
** Description : prompting user to choose the function
** Parameters : none
** Pre-Conditions : List constructor
** Post-Conditions : AddToList(), RemoveFromList(), DisplayList(), qutting the program
*********************************************************************/
void List::ShowMenu()
{
  while(1)
  {
    int choose;
   
    cout << endl << endl;
    cout << "welcome to grocery list program" << endl << endl;
    cout << "chose the number you want to check" << endl;
    cout << "1. add an item to the list" << endl;
    cout << "2. remove an item from the list" << endl;
    cout << "3. display the current list" << endl;
    cout << "4. quit the program" << endl;
   
    cin >> choose;

    /*validating the right input for ShowMenu() function*/
    while(cin.fail() || ((choose != 1) && (choose != 2) && (choose != 3) &&(choose !=4)))
    {
        cin.clear();
        cin.ignore(100000000, '\n');
        cout << endl << "invalid! input proper number" << endl << endl;
        cin >> choose;
        
    }

    if(choose == 1)
    {
        //calling adding an item function
        AddToList();


    }
    else if(choose == 2)
    {
        //calling removing an itemfunction
        RemoveFromList();
    }
    else if(choose == 3)
    {
        //calling display function
        DisplayList();
   }
   else if(choose ==4 )
   {
        cout << endl << "program ended" << endl << endl;
        break;
   }

  }

}



/********************************************************************* 
** Function : AddToList()
** Description : Adding an item to the list
** Parameters : none
** Pre-Conditions : List constructor
** Post-Conditions : UserInput()
*********************************************************************/
void List::AddToList()
{

    if(emptyPos > capacity) // when resizing the array is needed
    {
        
        /* making a new temporary array*/
        pTemp = new Item*[capacity + 1];

        /* copying elements of pItem to pTemp*/
        for(int i = 0; i < capacity; i++)
        {
            pTemp[i] = pItem[i];
        }
        
        /* making a new element to point a new Item */
        pTemp[capacity] = new Item;

        /*deleting old pItem array*/ 
        delete [] pItem;
    
        /*now pItem pointer variable  points newly resized array */ 
        pItem = pTemp;

    
        capacity++;

      }

    UserInput(emptyPos - 1);

    emptyPos++;

}

/********************************************************************* 
** Function : UserInput()
** Description : prompting user to input the name, unit, number to buy, price for the item
** Parameters : integer n refering to the position where new item could be positioned. 
** Pre-Conditions : AddToList()
** Post-Conditions : the item information is stored in item object with usage of Set functions. 
*********************************************************************/
void List:: UserInput(int n)
{   
    /*variables to temporary store input values till using mutator functions of item class*/
    string name, unit;
    int numToBuy;
    double price;
    
    int i = n;

    //inputting name of item validating whether it is already written on the list or not 
    //using operator overloading 
    
    cout << "Input name of item" << endl;
    cin.get();
    getline(cin, name);
#if 1    
    for(int i = 0; i < emptyPos - 1; i++)
    {
        if((*pItem[i]) == name)
           {
              cout << endl <<  "you already put this to the list" << endl << endl;
              emptyPos--;
              return;
           }  
    }
#endif    
   pItem[i]->SetName(name);

    
    /*inputting unit for the item*/
    cout << "Input unit of item" << endl; 
    getline(cin, unit);
    pItem[i]->SetUnit(unit);
   
   /*inputting number to buy*/
    cout << "Input the number to buy" << endl;
    cin >> numToBuy;    
    while(cin.fail() || numToBuy <= 0)
    {
        cin.clear();
        cin.ignore(100000000, '\n');
        cout << endl << "invalid! input proper number" << endl << endl;
        cin >> numToBuy;     
    }
    pItem[i]->SetNumToBuy(numToBuy);    
    
    /*inputting price for the item*/
    cout << "Input price of item" << endl;
    cin >> price;
    while(cin.fail() || price < 0)
    {
        cin.clear();
        cin.ignore(100000000, '\n');
        cout << endl << "invalid! input proper number" << endl << endl;
        cin >> price;
    }
    pItem[i]->SetPrice(price); 

}
/********************************************************************* 
** Function : RemoveFromList()
** Description : prompting user to input the name to erase from the list
** Parameters : none
** Pre-Conditions : List constructor, ShowMenu()
** Post-Conditions : the item gets removed if there is a matching name or it returs the message "there is nothing to delete"
*********************************************************************/
void List::RemoveFromList()
{
    string removeItem;
    cout << "input an item to remove" << endl;
    cin.get();
    getline(cin, removeItem); 

    

if(capacity > DEFAULT)    //the 1st case when the current number of items is bigger than default capacity.
{
    for(int i = 0; i < capacity; i++)
    {
        if( pItem[i]->GetName() == removeItem) // when there is name matching. 
        {
            /* resizing the array is needed */
            pTemp = new Item*[capacity - 1];
              for(int a = 0; a < i; a++)
              {
                 pTemp[a] = pItem[a];              
              }
              for(int a = i; a < capacity - 1; a++)
              {
                    pTemp[a] = pItem[a + 1];
              }
               delete [] pItem;
               pItem = pTemp;
            emptyPos = emptyPos - 1;
            capacity = capacity - 1;
 			cout << endl << endl <<" the item is deleted" << endl;
			return;          
        }
      }
      
      cout << endl << endl;
      cout << "there is no matched item to delete" << endl;
}
 else if(DEFAULT >= capacity)  // the 2nd case when the current number of items is lower than default capacity. 
    {
        
    for(int i = 0; i < capacity; i++)
    {
        if( pItem[i]->GetName() == removeItem) //when there is name matching.
        {
            /* resizing the array is needed*/
            pTemp = new Item*[capacity];
              for(int a = 0; a < i; a++)
              {
                 pTemp[a] = pItem[a];              
              }
              for(int a = i; a < emptyPos - 2; a++)
              {
                    pTemp[a] = pItem[a + 1];
              }
              
              for(int a = emptyPos - 2; a < capacity; a++)
                pTemp[a] = new Item;

               delete [] pItem;
               pItem = pTemp;
            emptyPos = emptyPos - 1;
 			cout << endl << endl <<" the item is deleted" << endl;
			return;          
        }
   
	 
    }
        cout << endl << endl;
        cout << "there is no matched item to delete" << endl;
        
}

}

/********************************************************************* 
** Function : DisplayLists()
** Description : displaying the items in the list on the screen
** Parameters : none
** Pre-Conditions : List constructor, ShowMenu()
** Post-Conditions : the item gets displayed with extended prices for each items and the total price for the items. 
*********************************************************************/
void List::DisplayList()
{
    system("clear");

    cout << endl << endl;
    cout << "The Grocery List" << endl << endl;


    for(int i = 0; i < emptyPos -1; i++)
    {
        cout << "name : " <<  pItem[i]->GetName() <<endl;
        cout << "unit : " <<  pItem[i]->GetUnit() <<endl;
        cout << "number to Buy  : " <<  pItem[i]->GetNumToBuy() <<endl;
        cout << "price : " <<  pItem[i]->GetPrice() <<endl;
        cout << "extended price : " << ( pItem[i]->GetPrice())*  ( pItem[i]->GetNumToBuy()) << endl << endl;
    }

        double totalPrice = CalTotalPrice();

        cout << "total price : " << totalPrice << endl << endl; 
}
/********************************************************************* 
** Function : CalTotalPrice()
** Description : calculates the total price for the item
** Parameters : none
** Pre-Conditions : List constructor, ShowMenu(), DisplayList()
** Post-Conditions : the functions calculates the total price and returns the total price.  
*********************************************************************/
double List::CalTotalPrice()
{
    double totalPrice = 0;

        for(int i = 0; i < emptyPos - 1; i++)
        {
            totalPrice += (pItem[i]->GetPrice() ) * (pItem[i]->GetNumToBuy());
        }
        
    return totalPrice;
}


