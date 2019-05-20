#include "Servomoteur.h"

// Constructors/Destructors
//  

Servomoteur::Servomoteur () {
initAttributes();
}

Servomoteur::~Servomoteur () { }

//  
// Methods
//  


// Accessor methods
//  


// Public static attribute accessor methods
//  


// Public attribute accessor methods
//  


// Protected static attribute accessor methods
//  


// Protected attribute accessor methods
//  


// Private static attribute accessor methods
//  


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

// Other methods
//  

void Servomoteur::initAttributes () {
}

