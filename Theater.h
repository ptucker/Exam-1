#ifndef THEATER_H_
#define THEATER_H_
#include "Movie.h"
#include <iostream>
#include <string>

using namespace std;

class Theater {
private:
	string name;
	string phone;
	int counter = 0;

public:
	Movie movies[11];
	Theater() {};
	Theater(string Name, string Phone) {
		name = Name;
		phone = Phone;
	}

	void AddMovie(Movie m);
	string GetMovieForHour(int time);
	int GetShowTimeForGenre(string genre);
	string GetPopcorePrice();
	string GetCokePrice();
};

#endif
