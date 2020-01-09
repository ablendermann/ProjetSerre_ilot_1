/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipale.h
 * Author: snir2g1
 *
 * Created on 19 décembre 2019, 18:47
 */

#ifndef _VUEPRINCIPALE_H
#define _VUEPRINCIPALE_H
#include <QLayout>
#include "ui_VuePrincipale.h"
#include "VueSerre.h"


class VuePrincipale : public QWidget {
    Q_OBJECT
public:
    VuePrincipale();
    virtual ~VuePrincipale();
    void mettreAJour();
    
    
    
private:
    Ui::VuePrincipale widget;
    
    VueSerre* serre1;
    
};

#endif /* _VUEPRINCIPALE_H */
