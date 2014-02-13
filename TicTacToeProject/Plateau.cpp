//
//  Plateau.cpp
//  TicTacToeProject
//
//  Created by Mathis Detourbet on 07/02/2014.
//  Copyright (c) 2014 Mathis Detourbet. All rights reserved.
//

#include "Plateau.h"

using namespace std;

Plateau::Plateau(int _lignes, int _colonnes) {
    lignes = _lignes;
    colonnes = _colonnes;
    
    vector < Pion > newCol;
    grid.push_back(newCol);
    
    Pion *pion = new Pion(0);
    
    for (int unsigned i = 0; i < _lignes; i++) {
        for (int unsigned j = 0; j < _colonnes; j++) {
            grid[i].push_back(*pion);
        }
        grid.push_back(newCol);
    }
    Pion *piontest = new Pion(2);
    this->grid[1][2] = *piontest;
}

void Plateau::display() {
    for (int unsigned i = 0; i < lignes; i++) {
        for (int unsigned j = 0; j < colonnes + 1; j++) {
            cout << "|" << this->grid[i][j].getType();
        }
        cout << "|" << endl;
    }
}

Plateau::~Plateau() {
    // Destructor
}

int Plateau::getLignes() const {
    return this->lignes;
}

int Plateau::getColonnes() const {
    return this->colonnes;
}

void Plateau::addPionAtIndex(Pion *_pion, int _x, int _y) {
    if (_x < this->lignes && _y < this->colonnes) {
        this->grid[_x][_y] = *_pion;
    }
}