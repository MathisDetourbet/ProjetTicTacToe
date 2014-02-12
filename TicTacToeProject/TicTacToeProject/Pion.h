//
//  Pion.h
//  TicTacToeProject
//
//  Created by Mathis Detourbet on 07/02/2014.
//  Copyright (c) 2014 Mathis Detourbet. All rights reserved.
//

#ifndef __TicTacToeProject__Pion__
#define __TicTacToeProject__Pion__

#include <iostream>

// Plateau composé de pions : VIDE = 0, CROIX = 1 ou ROND = 2
typedef enum {
    VIDE = 0,
    CROIX = 1,  // Machine = X
    ROND = 2    // Humain = O
}PionType;

/*typedef enum {
    X,
    O
}PION;*/

class Pion {
    private:
    PionType type;
    
    public:
    Pion(int);
    ~Pion();
    PionType getType() const;
};

#endif
