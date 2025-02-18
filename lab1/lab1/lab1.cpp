// lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Directions.h"
#include "Coord.h"
#include "Globals.h"
#include "Room.h"

using namespace std;


int randomNumber()
{
    srand(time(0));

    int x = rand() % 21;

    return x;
}

void getInput(int* n, int* m)
{
    cout << "\nEnter N: ";
    cin >> *n;
    cout << "\nEnter M: ";
    cin >> *m;
}

void initialize(Room* room, Coord* bug)
{
    for (int i = 0; i < room->sizeN; i++)
    {
        for (int j = 0; j < room->sizeM; j++)
        {
            room->room[i][j] = 0;

        }
    }
}
void initializeDirections(Directions* directionS)
{
    directionS->possibleDirections[0] = { -1, 0 }; //sol
    directionS->possibleDirections[1] = { -1, 1 }; //sol - üst capraz
    directionS->possibleDirections[2] = { 0, 1 }; //üst
    directionS->possibleDirections[3] = { 1, 1 }; //sağ - üst çapraz
    directionS->possibleDirections[4] = { 1, 0 }; // sağ
    directionS->possibleDirections[5] = { 1, -1 }; //sağ alt capraz
    directionS->possibleDirections[6] = { 0, -1 }; //alt 
    directionS->possibleDirections[7] = { -1, -1 }; // sol alt capraz

}

bool isValidMove(Room* room, Directions* dirSet, int d, Coord* bug)
{
    Coord location;
    location.x = dirSet->possibleDirections[d].x + bug->x;
    location.y = dirSet->possibleDirections[d].y + bug->y;

    return (location.x >= 0 && location.x < room->sizeN&& location.y >= 0 && location.y < room->sizeM);
}

Coord getNextValidLocation(Room* room, Directions* d, Coord* bug)
{
    Coord loc;
    int dir;

    do
    {
        dir = rand() % 8;
    } while (!isValidMove(room, d, dir, bug));

    {
        loc.x = d->possibleDirections[dir].x + bug->x;
        loc.y = d->possibleDirections[dir].y + bug->y;

        return loc;
    }
}

void move2NewLocation(Room* r, Coord* bug, Coord* newLoc)
{
    *bug = *newLoc;
    r->room[bug->x][bug->y]++;
}

bool checkedRoom(Room* r)
{
    for (int i = 0; i < r->sizeN; i++)
    {
        for (int j = 0; j < r->sizeM; j++)
        {
            if (r->room[i][j] == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void printRoom(Room* r)
{
    cout << "\n---------------Room---------------";
    for (int i = 0; i < r->sizeN; i++)
    {
        cout << "\n";
        for (int j = 0; j < r->sizeM; j++)
        {
            printf("%4d", r->room[i][j]);
        }
    }
}


int main()
{
    int isFinished = 0; // bool ?

    int sizeM, sizeN;
    Directions directionSet;
    Room room;
    Coord bug = { 2, 2 };
    Coord newLocation;
    int numberOfLegalSteps = 0;

    getInput(&sizeN, &sizeM);
    room.sizeN = sizeN;
    room.sizeM = sizeM;
    initialize(&room, &bug);
    initializeDirections(&directionSet);
    
    srand(static_cast<unsigned int>(time(nullptr))); // time(0) ?

    do {
        printRoom(&room);
        newLocation = getNextValidLocation(&room, &directionSet, &bug);
        move2NewLocation(&room, &bug, &newLocation);
        numberOfLegalSteps++;

        isFinished = checkedRoom(&room);
    } while (!isFinished && numberOfLegalSteps < MAX_STEP);

    printRoom(&room);
    cout << "\nTotal Numer of Steps: " << numberOfLegalSteps << endl;
}

