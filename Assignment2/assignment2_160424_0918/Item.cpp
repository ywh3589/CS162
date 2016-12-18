#include "Item.hpp"
#if 0
Item::Item()
{
   // UserInput(); // user can input name, unit, number to buy, price 


  //  name = GetName(); //굳이 여기서 접근할 필요가 있나...
  //  unit = GetUnit();
  //  numToBuy = GetNumToBuy();
  //  price = GetPrice();


}
#endif
#if 1
bool operator==(Item a, Item b)
{
    if((a.GetName()) == (b.GetName()))
        return true;


}
#endif
#if 0
void Item:: UserInput()
{
    cout << "Input name of item" << endl;
    cin.get();
    getline(cin, name);

    SetName(name);
    
#if 1
   cout << "Input unit of item" << endl; 
    getline(cin, unit);
    SetUnit(unit);
   

    cout << "Input the number to buy" << endl;
    cin >> numToBuy;
    SetNumToBuy(numToBuy);    
    

    cout << "Input price of item" << endl;
    cin >> price;
    SetPrice(price); 

#endif
}
#endif
void Item::SetName(string name)
{
   this->name = name;
}
string Item::GetName()
{
    return name;
}

void Item::SetUnit(string unit)
{
    this->unit = unit;
}
string Item::GetUnit()
{
    return unit;
}

void Item::SetNumToBuy(int numToBuy)
{
    this->numToBuy = numToBuy;
}
int Item::GetNumToBuy()
{
    return numToBuy;
}
void Item::SetPrice(double price)
{
    this->price = price;
}
double Item::GetPrice()
{
    return price;
}

void Item::ExtendedPrice()
{
    extendedPrice = GetNumToBuy() * GetPrice();
   //eturn extendedPrice;
}

double Item::GetExtendedPrice()
{
    return extendedPrice;
}











