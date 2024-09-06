#include <iostream>
#include "entreprise.h"
#include "mission.h"

using namespace std;

int main() {
    Entreprise entreprise1("Service Informatique de la Communauté de Commune", "Ploërmel");
    cout << "Nom de l'entreprise : " << entreprise1.getNomEntreprise() << endl;
    cout << "Ville de l'entreprise : " << entreprise1.getVilleEntreprise() << endl;

    Mission mission1(6,
        "Réponse aux problématiques clients et modification du système téléphonique de la Communauté de Commune",
        35,
        entreprise1);

    cout << "Nombre de personnes impliquées : " << mission1.getNbPersonne() << endl;
    cout << "Descriptif de la mission : " << mission1.getDescriptifMission() << endl;
    cout << "Nombre d'heures : " << mission1.getNbHeure() << endl;
    cout << "Entreprise de la mission : " << mission1.getEntrepriseMission().getNomEntreprise() << endl;
    cout << "Ville de l'entreprise : " << mission1.getEntrepriseMission().getVilleEntreprise() << endl;

    return 0;
}
