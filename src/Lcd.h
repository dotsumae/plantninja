
#ifndef LCD_H
#define LCD_H
#include "Peripherique.h"

#include string

/**
  * class Lcd
  * Ecran a cristaux liquides pour afficher du texte controle par I2C.
  */

class Lcd : virtual public Peripherique
{
public:

	// Constructors/Destructors
	//  


	/**
	 * Empty Constructor
	 */
	Lcd ();

	/**
	 * Empty Destructor
	 */
	virtual ~Lcd ();

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

	// Couleur de fond de l'ecran decrite par trois octets (RGB)
	char couleur[3];
	// Texte affiche sur l'ecran.
	string texte;
public:


	// Private attribute accessor methods
	//  

private:

public:


	// Private attribute accessor methods
	//  


	/**
	 * Set the value of couleur
	 * Couleur de fond de l'ecran decrite par trois octets (RGB)
	 * @param new_var the new value of couleur
	 */
	void setCouleur (char new_var[3]);

	/**
	 * Get the value of couleur
	 * Couleur de fond de l'ecran decrite par trois octets (RGB)
	 * @return the value of couleur
	 */
	char* getCouleur ();


	/**
	 * Set the value of texte
	 * Texte affiche sur l'ecran.
	 * @param new_var the new value of texte
	 */
	void setTexte (string new_var);

	/**
	 * Get the value of texte
	 * Texte affiche sur l'ecran.
	 * @return the value of texte
	 */
	string getTexte ();

private:


	void initAttributes () ;

};

#endif // LCD_H
