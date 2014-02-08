//
//  main.cpp
//  TicTacToeProject
//
//  Created by Mathis Detourbet on 07/02/2014.
//  Copyright (c) 2014 Mathis Detourbet. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Pion.h"
#include "Plateau.h"

using namespace std;

int main(int argc, const char * argv[])
{
    cout << "Projet d'aide a la decision : Jeu du Tic-tac-toe" << endl;
    
    int nbLines = 0, nbCol = 0;
    
    cout << "Taille du plateau de jeu : " << endl;
    cout << "Nombre de lignes : " << endl;
    cin >> nbLines;
    cout << "Nombre de colonnes : " << endl;
    cin >> nbCol;
    
    Plateau *plateau = new Plateau(nbLines, nbCol);
    
    return 0;
}

