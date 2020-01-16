/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueSerre.cpp
 * Author: snir2g1
 *
 * Created on 8 janvier 2020, 15:26
 */

#include "VueSerre.h"

VueSerre::VueSerre() {
    widget.setupUi(this);
}

VueSerre::~VueSerre() {
}

void VueSerre::mettreAJour() {
    widget.temperature->setText("30");
    widget.positionOuvrants->setText("80");
    widget.hygrometrie->setText("50");
    widget.luminosite->setText("?");
}