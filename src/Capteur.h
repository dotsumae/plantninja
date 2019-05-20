
#ifndef CAPTEUR_H
#define CAPTEUR_H
#include "Peripherique.h"

#include string

/**
  * class Capteur
  * Capteur quelconque.
  */

class Capteur : virtual public Peripherique
{
public:

	// Constructors/Destructors
	//  


	/**
	 * Empty Constructor
	 */
	Capteur ();

	/**
	 * Empty Destructor
	 */
	virtual ~Capteur ();

	// Static Public attributes
	//  

	// Public attributes
	//  


	// Public attribute accessor methods
	//  


	// Public attribute accessor methods
	//  


protected:

	// Static Protected attributes
	//  

	// Protected attributes
	//  

public:


	// Protected attribute accessor methods
	//  

protected:

public:


	// Protected attribute accessor methods
	//  

protected:


private:

	// Static Private attributes
	//  

	// Private attributes
	//  

	// Nature du capteur : 
	// - 1 si analogique
	// - 0 si numerique
	boolean analogique;
	// Mesures recentes du capteur. La valeur est toujours normalisee.
	vector<float> mesures;
public:


	// Private attribute accessor methods
	//  

private:

public:


	// Private attribute accessor methods
	//  


	/**
	 * Set the value of analogique
	 * Nature du capteur :
	 * - 1 si analogique
	 * - 0 si numerique
	 * @param new_var the new value of analogique
	 */
	void setAnalogique (boolean new_var);

	/**
	 * Get the value of analogique
	 * Nature du capteur :
	 * - 1 si analogique
	 * - 0 si numerique
	 * @return the value of analogique
	 */
	boolean getAnalogique ();


	/**
	 * Set the value of mesures
	 * Mesures recentes du capteur. La valeur est toujours normalisee.
	 * @param new_var the new value of mesures
	 */
	void setMesures (vector<float> new_var);

	/**
	 * Get the value of mesures
	 * Mesures recentes du capteur. La valeur est toujours normalisee.
	 * @return the value of mesures
	 */
	vector<float> getMesures ();

private:


	void initAttributes () ;

};

#endif // CAPTEUR_H
