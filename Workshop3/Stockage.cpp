//
// Created by Leandro De Barros Barbosa on 07/11/2022.
//

#include "Stockage.h"

Stockage::Stockage() {
    this->nbObjet = 10;
    this->etat=0;
    this->liste = new Object2D*[this->nbObjet];
}

Stockage::Stockage(int nb) {
    this->nbObjet = nb;
    this->liste= new Object2D*[this->nbObjet];
}

void Stockage::ajouter(Object2D* object) {
    if(this->etat <= this->nbObjet) {
        this->liste[etat] = object;
        this->etat = this->etat + 1;
    }
    else{
        cout<<"Plus de place dans le tableau" << endl;
    }
}

void Stockage::ajouter(Object2D* object, int place) {
    if(place <= this->nbObjet){
        this->liste[place]= object;
    }
    else{
        cout<<"Mauvaise valeur" << endl;
    }
}

void Stockage::afficherInfo() {
    for(int i=0;this->etat > i;i++){
        string message=this->liste[i]->afficheInfo();
        cout<<"Les informations du "<< i<< "eme objet sont "<< message <<endl;
    }
}