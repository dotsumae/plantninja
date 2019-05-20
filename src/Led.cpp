#include "Led.h"

// Constructors/Destructors
//  

Led::Led () {
}

Led::~Led () { }


// Private attribute accessor methods
//  


/**
 * Set the value of luminosite
 * luminosite de la LED entre 0 et 1.
 * @param new_var the new value of luminosite
 */
void Led::setLuminosite (float new_var) {
	luminosite = new_var;
}

/**
 * Get the value of luminosite
 * luminosite de la LED entre 0 et 1.
 * @return the value of luminosite
 */
float Led::getLuminosite () {
	return luminosite;
}


