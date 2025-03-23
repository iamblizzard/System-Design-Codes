#include "director.h"
#include "builder.h"

#include <iostream>
using namespace std;

int main () {
    Director* director = new Director();
    SportCarBuilder* sport_car_builder = new SportCarBuilder();
    cout << "Building a sports car" << endl;
    director->constructSportsCar(sport_car_builder);
    SportsCar sport_car = sport_car_builder->getResult();

    RegularCarBuilder* regular_car_builder = new RegularCarBuilder();
    cout << "Building a regular car" << endl;
    director->constructRegularCar(regular_car_builder);
    Car regular_car = regular_car_builder->getResult();
}