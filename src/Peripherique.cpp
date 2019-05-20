#include "Peripherique.h"

// Constructors/Destructors
//  

Peripherique::Peripherique () {
initAttributes();
}

Peripherique::~Peripherique () { }

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


/**
 * Set the value of nom
 * Nom du peripherique
 * @param new_var the new value of nom
 */
void Peripherique::setNom (string new_var) {
	nom = new_var;
}

/**
 * Get the value of nom
 * Nom du peripherique
 * @return the value of nom
 */
string Peripherique::getNom () {
	return nom;
}

/**
 * Set the value of pin
 * Pin du peripherique :
 * - GPIO : 2 a 8
 * - AIO : 0 a 3
 * @param new_var the new value of pin
 */
void Peripherique::setPin (int new_var) {
	pin = new_var;
}

/**
 * Get the value of pin
 * Pin du peripherique :
 * - GPIO : 2 a 8
 * - AIO : 0 a 3
 * @return the value of pin
 */
int Peripherique::getPin () {
	return pin;
}

/**
 * Set the value of etat
 * Etat du peripherique.
 * 0 si eteint.
 * 1 si actif.
 * @param new_var the new value of etat
 */
void Peripherique::setEtat (boolean new_var) {
	etat = new_var;
}

/**
 * Get the value of etat
 * Etat du peripherique.
 * 0 si eteint.
 * 1 si actif.
 * @return the value of etat
 */
boolean Peripherique::getEtat () {
	return etat;
}

/**
 * Set the value of intervalle
 * Intervalle de valeurs acceptees (actionneurs) ou renvoyees (capteurs) par le
 * peripherique.
 * @param new_var the new value of intervalle
 */
void Peripherique::setIntervalle (int new_var[2]) {
	*intervalle = *new_var;
}

/**
 * Get the value of intervalle
 * Intervalle de valeurs acceptees (actionneurs) ou renvoyees (capteurs) par le
 * peripherique.
 * @return the value of intervalle
 */
int* Peripherique::getIntervalle () {
	return intervalle;
}

// Private static attribute accessor methods
//  


// Private attribute accessor methods
//  


// Other methods
//  


/**
 * Reinitialise le peripherique.
 * @return boolean
 */
boolean Peripherique::reset ()
{
}

void Peripherique::initAttributes () {
}

