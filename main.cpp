#include <iostream>
#include <vector>
#include "Movies.h"

using namespace std;

int main()
{
	Movies avatar{ "Avatar", 10,1 };
	Movies harryPotter{ "HarryPotter", 20,2 };
	harryPotter.watchedMovie();//harry potter izlenmeyi 1 arttır
	Movies recepIvedik{ "RecepIvedik", 30,3 };
	recepIvedik.watchedMovie();
	recepIvedik.watchedMovie();
	Movies deliha{ "Deliha", 40 };

	Movies::printAllFilms();
}

