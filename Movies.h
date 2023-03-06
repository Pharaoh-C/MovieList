#pragma once
#include <string>
#include <vector>
#include <set> // class'da daha �nce olan bir �eyi eklemesine izin vermemek i�in.

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
	static std::set<std::string> memberNames;	// film isimleri burda tutulcak,e�er daha �nce olan bi�ey gelirse diye
};

