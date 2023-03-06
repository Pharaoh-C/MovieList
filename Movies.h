#pragma once
#include <string>
#include <vector>
#include <set> // class'da daha önce olan bir þeyi eklemesine izin vermemek için.

using namespace std; 

class Movies
{
private:
	std::string name;
	int rate;
	int watch;

public:
	Movies(std::string name_val = "NoName", int rate_val = 0, int watch_val = 0);
	~Movies();
	void watchedMovie();
	static int watched;
	static void printAllFilms();
	static std::vector <Movies> movie_list;
	void print() const;
	static std::set<std::string> memberNames;	// film isimleri burda tutulcak,eðer daha önce olan biþey gelirse diye
};

