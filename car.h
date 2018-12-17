/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: 2DHIF
* ---------------------------------------------------------
* Exercise Number:  07
* Title:			car.h
* Author:			David Kraus
* Due Date:		    December 17, 2018
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

typedef struct CarImplementation* Car;

enum CarType
{
    AIXAM, FIAT_MULTIPLA, JEEP
};

enum Color
{
    RED, GREEN, BLUE, ORANGE, SILVER, BLACK
};

//Public functions
//
void init();
Car get_car(enum CarType type);
double get_fill_level(Car car);
double get_acceleration_rate(Car car);
void set_acceleration_rate(Car car, double acceleration_rate);
void accelerate(Car car);
int get_speed(Car car);

enum CarType get_type(Car car);
enum Color get_color(Car car);

#endif
