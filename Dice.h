/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dice.h
 * Author: root
 *
 * Created on November 4, 2017, 10:52 AM
 */

#ifndef DICE_H
#define DICE_H

#include "Colour.h"
#include <iostream>


class Dice {
    
public:
    const Colour colour = Colour::WHITE;//should be initia in construct
    int face; //1 to 6 
    Dice();
   // Dice(const Dice& orig);
    //virtual ~Dice();
    int roll();
    friend std::ostream& operator<<(std::ostream& os, const Dice& dc);  


private:
    
};

#endif /* DICE_H */

