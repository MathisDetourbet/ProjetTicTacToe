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
    
    int nbLines = 0, nbCol = 0; // Choix taille plateau (utilisateur)
    int lvlIA = 1;  // Choix niveau difficulté IA (utilisateur)
    int posX = 0, posY = 0; // Position du pion (utilisateur)
    bool finPartie = false; // Var de fin de partie
    bool aQuiLeTour = true; // False -> tour machine
    
    cout << "Taille du plateau de jeu : " << endl;
    cout << "Nombre de lignes : " << endl;
    cin >> nbLines;
    cout << "Nombre de colonnes : " << endl;
    cin >> nbCol;
    
    Plateau *plateau = new Plateau(nbLines, nbCol); // On instancie un plateau
    plateau->display();   // On affiche le plateau
    
    cout << "Veuillez choisir le niveau de difficulté (1, 2, 3)" << endl;
    cin >> lvlIA;
    
    do {
        cout << "*** Tour joueur humain ***" << endl;
        cout << "Entrez la position de votre nouveau pion :" << endl;
        cin >> posX;
        cin >> posY;
        
        if (aQuiLeTour) {
            Pion *pion = new Pion(2);
            plateau->addPionAtIndex(pion, posX, posY);
        }
        else {
            // C'est la machine qui joue
        }
        
        plateau->display();
        finPartie = true;
    } while (!finPartie);
    
    return 0;
}

