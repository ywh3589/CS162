#include "grid.hpp"
#include "mymenu.hpp"

int main()
{
   int r = RowInput();
   int c = ColumnInput();
   int n = NumOfCritterInput(r,c);
   int move;

   cout << "input how many times would you like critters to move? " << endl;
   cin >> move;
    Grid grid(r, c, n);
    
    cout << " before start position " << endl;

    grid.StartPosition();

    system("clear");
  //  sleep(2);

#if 1
    cout << "after start position" << endl;

 
 
        cout << "before the first move" << endl;
       for(int i = 0 ; i < move; i++) 
        grid.UpdateLocation();
        // grid.ResetGrid(pCritter);
 

#endif
    return 0;
}
