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
#include "Pion.h"

class Plateau {
    private:
    
    int lignes, colonnes;
    
    std::vector < std::vector < Pion > > grid; // Conteneur de Pion (Grille 2D)
    public:
    
    Plateau(int, int);
    ~Plateau();
    void display(); // Affiche le plateau dans la console
    int getLignes() const;  // Getter
    int getColonnes() const;
    void addPionAtIndex(Pion, int, int); // Ajout d'un pion sur le plateau
    
};

#endif 
