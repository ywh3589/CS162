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
        double extendedPrice;
    public:
       // Item();
       // int yang;
       // string woo;
        void UserInput();
        void SetName(string name);
        string GetName();
        void SetUnit(string unit);
        string GetUnit();
        void SetNumToBuy(int numToBuy);
        int GetNumToBuy();
        void SetPrice(double price);
        double GetPrice();
        void ExtendedPrice();
        double GetExtendedPrice();

};
#endif
