#ifndef LIST_HPP
#define LIST_HPP
#include "Item.hpp"

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
      // void UserInput();
       void ShowMenu();         
       void AddToList();
      // void RemoveFromList();
       void DisplayList();

};

#endif
