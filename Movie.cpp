#ifndef MOVIE_H_
#define MOIVE_H_
#include "Movie.h"
#include <iostream>
#include <string>

string Movie::getTitle() {
	return title;
}

string Movie::getGenre() {
	//PT -- this expression won't quite work the way you want.
	//  if (genre == "Action" || genre == "Comedy" || genre == "Horror" || genre == "Documentary")
	if (genre == "Action", "Comedy", "Horror", "Documentary")
		return genre;
	else
		return "Comedy";
}

int Movie::getShowTime() {
	return showTime;
}

#endif
