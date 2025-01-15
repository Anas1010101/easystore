#include <iostream>
#include <vector>
#include <string>

class Magasin{
    public:

    Magasin(int MagasinId, std::string nom, std::string type, std::vector<Produit> produits);
    void addProduit(Produit produit);
    void afficheProduits(Produit produit);


    private:
    int MagasinId_;
    std::string nom_;
    std::string type_;
    std::vector<Produit> produits_;


    
};

class Produit{
    public:
        Produit(std::string titre, std::string description, int quantite, double prix, int id);
        std::string titre();
        std::string description();
        int quantite();
        double prix();
        void setTitre(std::string titre);
        void setDescription(std::string description);
        void setPrix(double prix);
        void setQuantite(int quantite);
        int id();
        friend std::ostream& operator<<(std::ostream &os, Produit produit);


    private:
        int id_;
        std::string titre_;
        std::string description_;
        int quantite_;
        double prix_;


};

