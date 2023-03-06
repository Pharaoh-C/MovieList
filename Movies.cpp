#include "Movies.h"
#include <iostream>
#include <string>

std::vector <Movies> Movies::movie_list{};
std::set<std::string> Movies::memberNames{};
int Movies::watched = 0;

Movies::Movies(std::string name_val, int rate_val,int watch_val)
	:name{ name_val },rate{rate_val}, watch{watch_val}
{
	if (memberNames.count(name_val) > 0)// Check if the member name already exists
	{ 
		throw std::invalid_argument("Member with name " + name_val + " already exists."); // Throw an exception if it does
	}
	memberNames.insert(name_val);
	movie_list.push_back(*this); //this pointerý hata ayýklayýcýdaki this.
}

Movies::~Movies(){}

void Movies::print() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Rate: " << rate << std::endl;
	std::cout << "Watch: " << this->watch << std::endl;

}

void Movies::printAllFilms()
{
	std::cout << "List of movies: " << std::endl;
	for (auto it = movie_list.rbegin(); it != movie_list.rend(); ++it)
	{
		it->print();
	}
}

void Movies::watchedMovie()
{
	if (memberNames.count(this->name) == 0) // check if the member name already exists
	{ 
		std::cout << "Member with name " + name + " does not exist." << std::endl; // throw an exception if it does no
		
	}
	else
	{
		watched++;
		(this->watch)++;
		this->print();
		for (auto& movie : movie_list) //movie listteki 
		{
			if (movie.name == this->name) //her elemanýn bilgisini güncelle
			{
				movie.watch = this->watch;//eðer izlenmesi deðiþmiþse
				break;
			}
		}
	}
}

