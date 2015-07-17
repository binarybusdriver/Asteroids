/***********************************************************************
* Program:
*    Project 4, Asteroids            
*    Brother McCracken, CS165
* Author:
*    Jeffry Simpson, Samuel Koontz
* Summary: 
*    game.h 
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#ifndef GAME_H
#define	GAME_H

#include "point.h"
#include "uiInteract.h"
#include "uiDraw.h"
#include <stdio.h>
#include <math.h>

#define DEBUG

using namespace std;

// set the bounds of the game

float Point::xMin = -200.0;
float Point::xMax =  200.0;
float Point::yMin = -200.0;
float Point::yMax =  200.0;


/************************************
 * Game class
 ***********************************/
class Game
{
   public:
      Game();          
      void update(int left, int right, bool spacebar);
      void draw();
      
    private:      

        Point ship;         // Ship 
        int orientation;     //ship orientation
        float dx;     // horizontal velocity of the skeet
        float dy;     // vertical velocity of the skeet
      
        int refresh;      // screen refresh for debug
      
};

#endif	/* GAME_H */

