
#ifndef LED_H
#define LED_H
#include "Peripherique.h"

#include string

/**
  * class Led
  * Diode electroluminescente controlee par PWM.
  */

class Led : virtual public Peripherique
{
public:

	// Constructors/Destructors
	//  


	/**
	 * Empty Constructor
	 */
	Led ();

	/**
	 * Empty Destructor
	 */
	virtual ~Led ();

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

	// luminosite de la LED entre 0 et 1.
	float luminosite;
public:


	// Private attribute accessor methods
	//  

private:

public:


	// Private attribute accessor methods
	//  


	/**
	 * Set the value of luminosite
	 * luminosite de la LED entre 0 et 1.
	 * @param new_var the new value of luminosite
	 */
	void setLuminosite (float new_var);

	/**
	 * Get the value of luminosite
	 * luminosite de la LED entre 0 et 1.
	 * @return the value of luminosite
	 */
	float getLuminosite ();

private:


	void initAttributes () ;

};

#endif // LED_H
