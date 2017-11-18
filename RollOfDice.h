/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RollOfDice.h
 * Author: root
 *
 * Created on November 4, 2017, 10:52 AM
 */

#ifndef ROLLOFDICE_H
#define ROLLOFDICE_H

#include <vector>
#include "Dice.h"

class RollOfDice {
private:
    typedef std::vector<Dice> diceList;
    diceList dices;

public:

        
    RollOfDice();
    RollOfDice(int size);
    RollOfDice(const RollOfDice& orig);
    virtual ~RollOfDice();
    typedef diceList::iterator iterator;
    typedef diceList::const_iterator const_iterator;
    iterator begin(){return dices.begin();};
    iterator end(){return dices.end();};
    int roll();//calls roll on all dices
    int pair(Dice d1, Dice d2);//returns RollOfDices with two selected Dices
    friend std::ostream& operator<<(std::ostream& os, const RollOfDice& rdc);
    
    

};

#endif /* ROLLOFDICE_H */

