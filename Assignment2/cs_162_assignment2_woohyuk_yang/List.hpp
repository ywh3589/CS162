/********************************************************************************** 

**  Program Filename : List.hpp

**	Author: Woohyuk Yang

**  Date: April. 25th. 2016

** Description: CS162 Assignment2

** Input : grocery shopping items and lists of those items. 

** Output : a grocery shopping list program 
************************************************************************************/

#ifndef LIST_HPP
#define LIST_HPP
#include "Item.hpp"

#define DEFAULT 4  //default capacity is 4 now

class Item;

class List
{
    private:
        Item **pItem;
        Item **pTemp;
        int capacity;       //index to be used to count the capacity of an array.
        int emptyPos;  //index to be used to know position to be stored in the array.  

    public:
        List();  // creating a list which can hold 4 items. (initial)
       ~List();
       void UserInput(int n);
       void ShowMenu();         
       void AddToList();
       void RemoveFromList();
       void DisplayList();
       double CalTotalPrice(); 
};

#endif
