#include "critter.hpp"
#include "grid.hpp"
#include <iostream>

int main()
{

//나중에 함수로 묶자....
	int a, b;	
	std::cout << "put a row number(should be integer) for your grid" << std::endl;
	std::cin >> a;
	while( a <= 0 )
	{
		std::cout << "a row number should be an integer which is bigger than or same with 1." << std::endl;
				
		std::cout << "put a row number(should be integer) for your grid" << std::endl;
		std::cin >> a;
        }


	std::cout << "put a colulmn number(should be integer) for your grid" << std::endl;
	std::cin >> b;
	while( b <= 0 )
	{
		std::cout << "a column number should be an integer which is bigger than or same with 1" << std::endl;

		std::cout << "put a colulmn number(should be integer) for your grid" << std::endl;
		std::cin >> b;

	}



    Grid grid(a, b);
    grid.showGrid(); 
  //  Critter critter;
   // std::cout << "critter constructor post" << std::endl;
   // critter.moveCritter();





	return 0;
}
