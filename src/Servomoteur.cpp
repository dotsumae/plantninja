#include "Servomoteur.h"

// Constructors/Destructors
//  

Servomoteur::Servomoteur () {

}

Servomoteur::~Servomoteur () { }

// Private attribute accessor methods
//  


/**
 * Set the value of position
 * Position du servomoteur en degres.
 * @param new_var the new value of position
 */
void Servomoteur::setPosition (int new_var) {
	position = new_var;
}

/**
 * Get the value of position
 * Position du servomoteur en degres.
 * @return the value of position
 */
int Servomoteur::getPosition () {
	return position;
}


