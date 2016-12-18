#include "List.hpp"

List::List() //where initial 4 capacity list is made
{
    capacity = 1;
    pItem = new Item*[capacity];
    for(int i; i < capacity; i++)
    pItem[i] = new Item;

    cout << "initial list made" << endl;
    emptyPos = 1;


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

#if 0
void List:: UserInput()
{
    string temp_name;
    
    cout << "Input a name of item" << endl;

    getline(cin,temp_name);
    cout << "1" << endl;
    pItem[0]->SetName(temp_name);
   // SetName(name); //when user input string somet:hing is needed

   // cout << "chose the number you want to check" << endl;
    cout << "1. add an item to the list" << endl;
    cout << "2. remove an item from the list" << endl;
    cout << "3. display the current list" << endl;

  //  cin >> choose;

  //  while(cin.fail() || ((choose != 1) && (choose != 2) && (choose != 3)))
  //  {
  //      cin.clear();
  //      cin.ignore(100000000, '\n');
  //      cout << endl << "invalid! input proper number" << endl << endl;
   //     cin >> choose;
        
   // }
}





#endif
#endif

#if 1
void List::AddToList()
{
    cout << "inside fun" << endl;
    cout << "capacity" << capacity << endl;
    cout << "emptyPos" << emptyPos << endl;
#if 0
    if(emptyPos > capacity)
    {
        cout << "inside if statement" << endl;
        
        /* making a new temporary array*/
        pTemp = new Item*[capacity + 1];

        cout << "new made ptem" << endl;
        for(int i = 0; i < capacity+1; i++)
        {
            pTemp[i] = new Item;
        }

        
        cout << "new made ptem2" << endl;
        
        /*copying pItem[i] to pTemp[i]  */
        for(int i = 0; i < capacity; i++)
        {
            cout << "first for loop" << endl;
            pTemp[i] = pItem[i];
            cout << "2 for loop" << endl;
            //delete pItem[i];
            
            cout << "3 for loop" << endl;
        }
        
        /*deleting former pItem[i]*/
        for(int i = 0; i < capacity; i++)
        delete [] pItem[i];
        cout << "in between" << endl;

         delete pItem;
        cout << "outside for loop" << endl;
        
        /*making new pItem with new capacity */
        
        pItem = new Item*[capacity + 1];
        for(int i = 0; i < capacity + 1; i++)
            pItem[i] = new Item;

        /*copying pTemp to newly made pItem array */
        
        for(int i = 0; i < capacity; i++)
        pItem[i] = pTemp[i];


        /*deleting former pTemp[i]*/
        for(int i = 0; i < capacity + 1; i++)
        delete (pTemp[i]);

        delete pTemp;
        cout << "in between" << endl;
        cout << "final" << endl;
        
        /* setting new capacity*/
        capacity++;
       
     }
        
#endif    
    cout << "no" << endl;
    pItem[emptyPos - 1]->UserInput();
    cout << "add to list" << endl;

   // cout << "name 2" << pTemp[1]->GetName() << endl;



  //  emptyPos++;
}
#endif


#if 0
void List::RemoveFromList()
{


}
#endif

#if 1
void List::DisplayList()
{
    //system("clear");

    cout << "The Grocery List" << endl << endl;

    for(int i = 0; i < emptyPos; i++)
    {
        cout << "name : " <<  pItem[i]->GetName() <<endl;
        cout << "unit : " <<  pItem[i]->GetUnit() <<endl;
        cout << "number to Buy  : " <<  pItem[i]->GetNumToBuy() <<endl;
        cout << "price : " <<  pItem[i]->GetPrice() <<endl;
        cout << "extended price : " << pItem[i]->GetExtendedPrice() << endl << endl;
    }
}
#endif
