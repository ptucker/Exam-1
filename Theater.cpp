#include "Theater.h"
#include <iostream>
#include <string>

void Theater::AddMovie(Movie m) {
	movies[counter] = (Movie(m.getTitle(), m.getGenre(), m.getShowTime()));
	counter++;
}

string Theater::GetMovieForHour(int time) {
	if (time < 0 || time > 24) {
		return "";
	}
	else {
		do {
			for (int i = 0; i < 11; i++) {
				if (movies[i].getShowTime() == time)
					return movies[i].getTitle();
			}
			time++;
		} while (time < 25);
	}
}

int Theater::GetShowTimeForGenre(string genre) {
	for (int i = 0; i < 11; i++) {
		if (movies[i].getGenre() == genre)
			return movies[i].getShowTime();
	}
}

string Theater::GetPopcorePrice() {
	return "Popcorn = $4.00";
}

string Theater::GetCokePrice() {
	return "Coke = $2.50";
}