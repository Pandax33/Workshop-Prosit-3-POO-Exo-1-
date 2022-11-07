//
// Created by Leandro De Barros Barbosa on 07/11/2022.
//
#include "Cube.h"
#ifndef WORKSHOP3_STOCKAGE_H
#define WORKSHOP3_STOCKAGE_H


class Stockage {
private:
    int nbObjet;
    int etat;
    Object2D** liste;
public:
    Stockage();
    Stockage(int);
    void ajouter(Object2D*);
    void ajouter(Object2D*,int);
    void afficherInfo();

};


#endif //WORKSHOP3_STOCKAGE_H
