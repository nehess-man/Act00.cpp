#include "mission.h"

Mission::Mission() {
    this->nbPersonne = 0;
    this->descriptifMission = "Aucune mission";
    this->nbHeure = 0;
    this->entrepriseMission = Entreprise();
}

Mission::Mission(int nbPers, std::string desc, int nbHr, Entreprise entreprise) {
    this->nbPersonne = nbPers;
    this->descriptifMission = desc;
    this->nbHeure = nbHr;
    this->entrepriseMission = entreprise;
}

Mission::~Mission() {
}

Mission::Mission(const Mission& mission) {
    this->nbPersonne = mission.nbPersonne;
    this->descriptifMission = mission.descriptifMission;
    this->nbHeure = mission.nbHeure;
    this->entrepriseMission = mission.entrepriseMission;
}

Mission& Mission::operator = (const Mission& mission) {
    if (this != &mission) {
        this->nbPersonne = mission.nbPersonne;
        this->descriptifMission = mission.descriptifMission;
        this->nbHeure = mission.nbHeure;
        this->entrepriseMission = mission.entrepriseMission;
    }
    return *this;
}

int Mission::getNbPersonne() {
    return this->nbPersonne;
}

void Mission::setNbPersonne(int nbPers) {
    this->nbPersonne = nbPers;
}

std::string Mission::getDescriptifMission() {
    return this->descriptifMission;
}

void Mission::setDescriptifMission(std::string desc) {
    this->descriptifMission = desc;
}

int Mission::getNbHeure() {
    return this->nbHeure;
}

void Mission::setNbHeure(int nbHr) {
    this->nbHeure = nbHr;
}

Entreprise Mission::getEntrepriseMission() {
    return this->entrepriseMission;
}

void Mission::setEntrepriseMission(Entreprise entreprise) {
    this->entrepriseMission = entreprise;
}
