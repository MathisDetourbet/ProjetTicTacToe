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

#endif /* defined(__TicTacToeProject__Pion__) */

// Plut?t que de cr?er un bool?en, pourquoi ne pas faire une ?num ?
typedef enum {
    X,
    O
}PION; // L'avantage c'est que ce sera plus lisible dans le code

class Pion {
    private:
    
//    bool type;
    PION pion;
    
    public:
    
//    Pion(bool);
    Pion(PION _pion);
    ~Pion();
    
};
