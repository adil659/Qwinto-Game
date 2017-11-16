/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RandomDice.h
 * Author: root
 *
 * Created on November 4, 2017, 10:51 AM
 */

#ifndef RANDOMDICE_H
#define RANDOMDICE_H

/* 
 * RandomDice should be a helper structure with only static objects.
 * The structure has the task to hold all objects needed to use one 
 * std::uniform_int_distribution
 * for all dice ensuring that the pseudo 
 * random numbers do not start at the same value. 
 */ 
struct RandomDice {
    static std::random_device rd;  //Will be used to obtain a seed for the random number engine
    static std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd() 
    static std::uniform_int_distribution<> dis(1, 6);
    // use  :  result = dis(gen);

};

#endif /* RANDOMDICE_H */

