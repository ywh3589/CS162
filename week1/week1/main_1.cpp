#include <iostream>


using namespace std;

void grid(int x, int y);


int main()
{   
    grid(2,3);


   return 0;
}

void grid(int x, int y)
{
    char **temp;
    temp = new  char*[x];

    for(int n = 0; n < x; n++)
    {
        temp[n] = new char[y];
    }

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            temp[i][j] = 'd';
        }
    
    }

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            
            cout << temp[i][j];
        }

        cout << endl;
    }
    
  //  return 0;

}
