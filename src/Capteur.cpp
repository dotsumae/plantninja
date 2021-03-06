#include "Capteur.h"

// Constructors/Destructors
//  

Capteur::Capteur () {
}

Capteur::~Capteur () { }


// Private attribute accessor methods
//  


/**
 * Set the value of analogique
 * Nature du capteur :
 * - 1 si analogique
 * - 0 si numerique
 * @param new_var the new value of analogique
 */
void Capteur::setAnalogique (bool new_var) {
	analogique = new_var;
}

/**
 * Get the value of analogique
 * Nature du capteur :
 * - 1 si analogique
 * - 0 si numerique
 * @return the value of analogique
 */
bool Capteur::getAnalogique () {
	return analogique;
}

/**
 * Set the value of mesures
 * Mesures recentes du capteur. La valeur est toujours normalisee.
 * @param new_var the new value of mesures
 */
void Capteur::setMesures (vector<float> new_var) {
	mesures = new_var;
}

/**
 * Get the value of mesures
 * Mesures recentes du capteur. La valeur est toujours normalisee.
 * @return the value of mesures
 */
vector<float> Capteur::getMesures () {
	return mesures;
}

