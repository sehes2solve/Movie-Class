#include <iostream>
#include "Movie.h"

using namespace std;

int main()
{
    Movie Film1("Whiplash","R"), Film2("Push","PG-13");
    Film1.addRating("1");
    Film1.addRating("2");
    Film1.addRating("3");
    Film1.addRating("4");
    Film1.addRating("5");

    Film2.addRating("1");
    Film2.addRating("3");
    Film2.addRating("2");
    Film2.addRating("2");
    Film2.addRating("5");
    cout << "Film 1 : \nName : " << Film1.get_name() << "\nMPAA Rating : " << Film1.get_MPAA() << "\nRate : " << Film1.GetAverage() << endl;
    cout << "Film 2 : \nName : " << Film2.get_name() << "\nMPAA Rating : " << Film2.get_MPAA() << "\nRate : " << Film2.GetAverage() << endl;

    return 0;
}
