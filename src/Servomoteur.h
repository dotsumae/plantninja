
#ifndef SERVOMOTEUR_H
#define SERVOMOTEUR_H
#include "Peripherique.h"

#include <string>

/**
  * class Servomoteur
  * Servomoteur controle par PMW.
  */

class Servomoteur : virtual public Peripherique
{
public:

	// Constructors/Destructors
	//  


	/**
	 * Empty Constructor
	 */
	Servomoteur ();

	/**
	 * Empty Destructor
	 */
	virtual ~Servomoteur ();



private:

	// Static Private attributes
	//  

	// Private attributes
	//  

	// Position du servomoteur en degres.
	int position;

public:


	// Private attribute accessor methods
	//  


	/**
	 * Set the value of position
	 * Position du servomoteur en degres.
	 * @param new_var the new value of position
	 */
	void setPosition (int new_var);

	/**
	 * Get the value of position
	 * Position du servomoteur en degres.
	 * @return the value of position
	 */
	int getPosition ();

};

#endif // SERVOMOTEUR_H
