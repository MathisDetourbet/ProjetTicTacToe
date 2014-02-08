//
//  Plateau.h
//  TicTacToeProject
//
//  Created by Mathis Detourbet on 07/02/2014.
//  Copyright (c) 2014 Mathis Detourbet. All rights reserved.
//

#ifndef __TicTacToeProject__Plateau__
#define __TicTacToeProject__Plateau__

#include <iostream>
#include <vector>

#endif /* defined(__TicTacToeProject__Plateau__) */

class Plateau {
    private:
    
    int lignes, colonnes;
    
    std::vector < std::vector < int > > grid;
    public:
    
    Plateau(int, int);
    ~Plateau();
    void display();
    
};
