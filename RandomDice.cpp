/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RandomDice.cpp
 * Author: root
 * 
 * Created on November 4, 2017, 10:51 AM
 */

#include "RandomDice.h"

    std::random_device RandomDice::rd;  
    std::mt19937 RandomDice::gen(RandomDice::rd()); //Standard mersenne_twister_engine seeded with rd() 
    std::uniform_int_distribution<> RandomDice::dis(1, 6);