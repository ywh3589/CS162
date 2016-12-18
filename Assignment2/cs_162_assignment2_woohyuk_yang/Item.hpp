/********************************************************************************** 

**  Program Filename : Item.hpp

**	Author: Woohyuk Yang

**  Date: April. 25th. 2016

** Description: CS162 Assignment2

** Input : grocery shopping items and lists of those items. 

** Output : a grocery shopping list program 
************************************************************************************/

#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>
#include <iostream>

using namespace std;

class Item
{

    private:
        string name;
        string unit;
        int numToBuy;
        double price;
    public:
       // Item();
       // int yang;
       // string woo;
       // void UserInput();
        void SetName(string name);
        string GetName();
        void SetUnit(string unit);
        string GetUnit();
        void SetNumToBuy(int numToBuy);
        int GetNumToBuy();
        void SetPrice(double price);
        double GetPrice();
        friend bool operator== (Item a, string b);
};
#endif
