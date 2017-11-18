/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RollOfDice.cpp
 * Author: root
 * 
 * Created on November 4, 2017, 10:52 AM
 */

#include "RollOfDice.h"

RollOfDice::RollOfDice() {
}
RollOfDice::RollOfDice(int size){
    
}

RollOfDice::RollOfDice(const RollOfDice& orig) {
}

RollOfDice::~RollOfDice() {
}
int RollOfDice::roll(){
    int sum = 0;
    for(Dice d : dices){
        d.roll();
        sum+=d.face;
    }
    return sum;
}

int RollOfDice::pair(Dice d1, Dice d2){
    d1.roll();
    d2.roll();
    return d1.face+d2.face;
}

std::ostream& operator<<(std::ostream& os, const RollOfDice& rdc){
    os<< "Roll of dice result : " ;
}
