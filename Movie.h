#ifndef MOVIE_H_
#define MOIVE_H_
#include <iostream>
#include <string>

using namespace std;

class Movie {
private:
	string title;
	string genre;
	int showTime;	

public:
	Movie() {
		title = "In the Heart of the Sea";
		genre = "Action";
		showTime = 12;
	}

	Movie(string Title, string Genre, int ShowTime) {
		title = Title;
		genre = Genre;
		showTime = ShowTime;
	}

	string getTitle();
	string getGenre();
	int getShowTime();
};

#endif