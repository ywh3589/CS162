/********************************************************************************** 

**  Program Filename : Item.cpp

**	Author: Woohyuk Yang

**  Date: April. 25th. 2016

** Description: CS162 Assignment2

** Input : grocery shopping items and lists of those items. 

** Output : a grocery shopping list program 
************************************************************************************/

#include "Item.hpp"

/********************************************************************* 
** Function : operator==())
** Description : overloading the operator == to compare the name which would be newly typed with the names already stored.
** Parameters : Item a, and string b(containing the newly typed name)
** Pre-Conditions : List constructor, ShowMenu(), AddToList()
** Post-Conditions : If there is no matching name it allows the fuction to add the item to the list.  
*********************************************************************/
bool operator==(Item a, string b)
{
    if((a.GetName()) == (b))
      { 
        return true;
      }
        return false;
}
/********************************************************************* 
** Function : SetName
** Description : setting the name of the item to name variable
** Parameters : string name(name of the item)
** Pre-Conditions : List constructor, ShowMenu(), AddToList()
** Post-Conditions : setting the name of item to name variable
*********************************************************************/
void Item::SetName(string name)
{
     this->name = name;
}
/********************************************************************* 
** Function : GetName
** Description : returning the name of the item
** Parameters : n/a
** Pre-Conditions : List constructor, ShowMenu(), AddToList(), SetName()
** Post-Conditions : this function returns the value of "name" variable
*********************************************************************/
string Item::GetName()
{
    return name;
}
/********************************************************************* 
** Function : SetUnit
** Description : setting the unit of the item to unit variable
** Parameters : string unit(unit of the item)
** Pre-Conditions : List constructor, ShowMenu(), AddToList()
** Post-Conditions : setting the unit of item to unit variable
*********************************************************************/
void Item::SetUnit(string unit)
{
    this->unit = unit;
}
/********************************************************************* 
** Function : GetUnit
** Description : returning the unit of the item
** Parameters : n/a
** Pre-Conditions : List constructor, ShowMenu(), AddToList(), SetUnit()
** Post-Conditions : this function returns the valuie of "unit" variable
*********************************************************************/
string Item::GetUnit()
{
    return unit;
}
/********************************************************************* 
** Function : SetNumToBuy
** Description : setting the number of each items to buy to "numToBuy" variable
** Parameters : int numToBuy(the number of items to buy)
** Pre-Conditions : List constructor, ShowMenu(), AddToList()
** Post-Conditions : setting the number of each items to buy to numToBuy variable
*********************************************************************/
void Item::SetNumToBuy(int numToBuy)
{
    this->numToBuy = numToBuy;
}
/********************************************************************* 
** Function : GetNumToBuy
** Description : returning the number of items to buy 
** Parameters : n/a
** Pre-Conditions : List constructor, ShowMenu(), AddToList(), SetNumToBuy()
** Post-Conditions : this function returns the value of "numToBuy" variable
*********************************************************************/
int Item::GetNumToBuy()
{
    return numToBuy;
}
/********************************************************************* 
** Function : SetPrice
** Description : setting the price for the item to "price" variable.
** Parameters : double price (price of item  )
** Pre-Conditions : List constructor, ShowMenu(), AddToList()
** Post-Conditions : setting the price of item input by the user to "price" variable
*********************************************************************/
void Item::SetPrice(double price)
{
    this->price = price;
}
/********************************************************************* 
** Function : GetPrice
** Description : returning the price of item
** Parameters : n/a
** Pre-Conditions : List constructor, ShowMenu(), AddToList(), SetPrice()
** Post-Conditions : this function returns the value of "price"  variable
*********************************************************************/
double Item::GetPrice()
{
    return price;
}











