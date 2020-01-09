/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 19 décembre 2019, 18:29
 */
#include "VuePrincipale.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    VuePrincipale *monFormulaire = new VuePrincipale() ;
    monFormulaire -> show() ;




    return app.exec();
}
