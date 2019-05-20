#include "Lcd.h"

// Constructors/Destructors
//  

Lcd::Lcd () {
initAttributes();
}

Lcd::~Lcd () { }

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
 * Set the value of couleur
 * Couleur de fond de l'ecran decrite par trois octets (RGB)
 * @param new_var the new value of couleur
 */
void Lcd::setCouleur (char new_var[3]) {
	*couleur = *new_var;
}

/**
 * Get the value of couleur
 * Couleur de fond de l'ecran decrite par trois octets (RGB)
 * @return the value of couleur
 */
char* Lcd::getCouleur () {
	return couleur;
}

/**
 * Set the value of texte
 * Texte affiche sur l'ecran.
 * @param new_var the new value of texte
 */
void Lcd::setTexte (string new_var) {
	texte = new_var;
}

/**
 * Get the value of texte
 * Texte affiche sur l'ecran.
 * @return the value of texte
 */
string Lcd::getTexte () {
	return texte;
}

// Other methods
//  

void Lcd::initAttributes () {
}

