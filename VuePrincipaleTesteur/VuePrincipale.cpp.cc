/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VuePrincipale.cpp
 * Author: snir2g1
 *
 * Created on 19 décembre 2019, 18:47
 */

#include "VuePrincipale.h"



VuePrincipale::VuePrincipale() {
    widget.setupUi(this);
    
    serre1 = new VueSerre();
    
    widget.serre->addWidget(serre1);
    
}

VuePrincipale::~VuePrincipale() {
}

void VuePrincipale::mettreAJour(){
   
    

    
}
