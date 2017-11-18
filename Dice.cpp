/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dice.cpp
 * Author: root
 * 
 * Created on November 4, 2017, 10:52 AM
 */

#include "Dice.h"
#include "RandomDice.h"

Dice::Dice() {
    face = RandomDice::dis(RandomDice::gen);
}
/*
Dice::Dice(const Dice& orig) {
}

Dice::~Dice() {
}
*/

int Dice::roll(){
    face = RandomDice::dis(RandomDice::gen);
    return face;
}
std::ostream& operator<<(std::ostream& os, const Dice& dc)  
{  
    //might have to print colour as Strig   
    os <<"Colour : "<< static_cast<int>(dc.colour) <<" Value : "<<dc.face<< std::endl;  
    return os;  
}  
