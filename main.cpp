/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: root
 *
 * Created on November 3, 2017, 6:13 PM
 */
#include <iostream>
#include <cstdlib>
#include "RandomDice.h"
#include "Dice.h"
#include "RollOfDice.h"
using namespace std;

/*
 * 
 
  struct majdi{
     static std::random_device rd;  
     static std::mt19937 gen; 
     static std::uniform_int_distribution<> dis(1, 6);
    };
 */   
int main(int argc, char** argv) {
    
    Dice dc;
    
    RollOfDice rd;
    cout << rd;
    return 0;
}

