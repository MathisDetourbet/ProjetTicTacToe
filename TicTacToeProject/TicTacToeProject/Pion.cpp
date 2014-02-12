//
//  Pion.cpp
//  TicTacToeProject
//
//  Created by Mathis Detourbet on 07/02/2014.
//  Copyright (c) 2014 Mathis Detourbet. All rights reserved.
//

#include <iostream>
#include "Pion.h"

using namespace std;

Pion::Pion(int _pionType) {
    if (_pionType ==  0) {type = PionType::VIDE;}
    
    else if (_pionType == 1) {type = PionType::CROIX;}
    
    else {type = PionType::ROND;}
}
    
Pion::~Pion() {
    // Destructor
}

PionType Pion::getType() const{
    return this->type;
}
