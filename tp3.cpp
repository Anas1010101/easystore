#include "tp3.h"

Magasin::Magasin(int MagasinId, std::string nom, std::string type, std::vector<Produit> produits):MagasinId_(MagasinId),
nom_(nom), type_(type), produits_(produits){};


void Magasin::addProduit(Produit produit){
    produits_.push_back(produit);
}

void afficheProduits(Produit produit){
    for(int i=0; i< produit.sizeof(); i++)
}



Produit::Produit(std::string titre, std::string description, int quantite, double prix, int id):
titre_(titre), description_(description), quantite_(quantite), id_(id){}

std::string Produit::titre(){
    return titre_;
}

std::string Produit::description(){
    return description_;
}

int Produit::quantite(){
    return quantite_;
}

double Produit::prix(){
    return prix_;
}

void Produit::setTitre(std::string titre){
    titre_ = titre;
}

void Produit::setDescription(std::string description){
    description_ = description;
}

void Produit::setPrix(double prix){
    prix_ = prix;
}

void Produit::setQuantite( int quantite){
    quantite_ = quantite;
}

int Produit::id(){
    return id_;
}

std::ostream& operator<<(std::ostream& os, Produit &produit){
    os << "Titre du produit: " << produit.titre() << "Description du produit : " << produit.description() << "Prix du produit: " <<
     produit.prix() << "Quantite : "<< produit.quantite() << std::endl;
    return os;
}













