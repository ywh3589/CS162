#include "List.hpp"

List::List() //where initial 4 capacity list is made
{
    capacity = DEFAULT;
    pItem = new Item*[capacity];
    for(int i; i < capacity; i++)
    pItem[i] = new Item;

    cout << "initial list made" << endl;
    emptyPos = 1;


}

List::~List()
{
    for(int i; i <capacity; i++)
    delete pItem[i];

    delete pItem;


}
#if 1
void List::ShowMenu()
{
  while(1)
  {
    int choose;
    
    cout << "welcome to grocery list program" << endl;
    cout << "chose the number you want to check" << endl;
    cout << "1. add an item to the list" << endl;
    cout << "2. remove an item from the list" << endl;
    cout << "3. display the current list" << endl;
    cout << "4. quit the program" << endl;

    cin >> choose;

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
        cout << "add function" << endl;
        AddToList();


    }
    else if(choose == 2)
    {
        //calling removing an itemfunction
        cout << "remove function" << endl;
        RemoveFromList();
    }
    else if(choose == 3)
    {
        //calling display function
        cout << "display function" << endl;
        DisplayList();
   }
   else if(choose ==4 )
   {
        cout << "program end" << endl;
        break;
   }

  }

}

#endif


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
#if 0
bool List::operator==(const Item& a, const Item& b)
{


  if(a.GetName() == b.GetName())
            {
                return true;
            }
        
}
#endif
void List:: UserInput(int n)
{   string name, unit;
    int numToBuy;
    double price;
    
    int i = n;

    cout << "Input name of item" << endl;
    cin.get();
    getline(cin, name);
    
    for(int i = 0; i < emptyPos - 1; i++)
    {
        cout << "maimo" << endl;
        if((*pItem[i]) == (*pItem[emptyPos -1]))
           {
              cout << "you already put this to the list" << endl;
             // delete pItem[emptyPos];
              return;
            }
    }    
    
    pItem[i]->SetName(name);

    
    
#if 1
   cout << "Input unit of item" << endl; 
    getline(cin, unit);
    pItem[i]->SetUnit(unit);
   

    cout << "Input the number to buy" << endl;
    cin >> numToBuy;
    pItem[i]->SetNumToBuy(numToBuy);    
    

    cout << "Input price of item" << endl;
    cin >> price;
    pItem[i]->SetPrice(price); 

#endif
}

void List::RemoveFromList()
{
    //int n;
    string removeItem;
    cout << "input an item to remove" << endl;
    cin.get();
    getline(cin, removeItem); 
    cout << removeItem << endl << endl;
    cout << "DEFAULT" << DEFAULT << endl;
    cout << "capacity" << capacity << endl << endl;


    

if(capacity > DEFAULT)
{
    for(int i = 0; i < capacity; i++)
    {
        if( pItem[i]->GetName() == removeItem)
        {
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
        }
       else
       {
       
            cout << "there is nothing to delete" << endl;
       }
      
      }
}
 else if(DEFAULT >= capacity)
    {
        
    for(int i = 0; i < capacity; i++)
    {
        if( pItem[i]->GetName() == removeItem)
        {
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
           
        }
       else
       {
       
            cout << "there is nothing to delete" << endl;
       }
    
    
    
    }

        
            //cout << "there is nothing to delete" << endl;
        
   
}



}


#if 1
void List::DisplayList()
{
    //system("clear");

    cout << "The Grocery List" << endl << endl;
    cout << "emptyPos" << emptyPos << endl;


    for(int i = 0; i < emptyPos -1; i++)
    {
        cout << "i" << "    " << i << endl << endl;
        cout << "name : " <<  pItem[i]->GetName() <<endl;
        cout << "unit : " <<  pItem[i]->GetUnit() <<endl;
        cout << "number to Buy  : " <<  pItem[i]->GetNumToBuy() <<endl;
        cout << "price : " <<  pItem[i]->GetPrice() <<endl;
        cout << "extended price : " << ( pItem[i]->GetPrice())*  ( pItem[i]->GetNumToBuy()) << endl << endl;

     //   cout << "extended price2 : " << pItem[i]->GetExtendedPrice() << endl;
    }

        double totalPrice = 0;
        for(int i = 0; i < emptyPos - 1; i++)
        {
            totalPrice += (pItem[i]->GetPrice() ) * (pItem[i]->GetNumToBuy());
        }

        cout << endl << "total price : " << totalPrice << endl << endl; 
}
#endif


