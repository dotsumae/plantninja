
#ifndef PERIPHERIQUE_H
#define PERIPHERIQUE_H

#include <string>

/**
  * class Peripherique
  * Classe abstraite pour manipuler des peripheriques.
  */

class Peripherique
{
public:

	// Constructors/Destructors
	//  


	/**
	 * Empty Constructor
	 */
	Peripherique ();

	/**
	 * Empty Destructor
	 */
	virtual ~Peripherique ();

	
	/**
	 * Reinitialise le peripherique.
	 * @return bool
	 */
	virtual bool reset ();

protected:

	// Protected attributes
	//  

	// Nom du peripherique
	string nom;
	// Pin du peripherique : 
	// - GPIO : 2 a 8
	// - AIO : 0 a 3
	int pin;
	// Etat du peripherique.
	// 0 si eteint.
	// 1 si actif.
	bool etat;
	// Intervalle de valeurs acceptees (actionneurs) ou renvoyees (capteurs) par le peripherique.
	int intervalle[2];

public:


	// Protected attribute accessor methods
	//  


	/**
	 * Set the value of nom
	 * Nom du peripherique
	 * @param new_var the new value of nom
	 */
	void setNom (string new_var);

	/**
	 * Get the value of nom
	 * Nom du peripherique
	 * @return the value of nom
	 */
	string getNom ();


	/**
	 * Set the value of pin
	 * Pin du peripherique :
	 * - GPIO : 2 a 8
	 * - AIO : 0 a 3
	 * @param new_var the new value of pin
	 */
	void setPin (int new_var);

	/**
	 * Get the value of pin
	 * Pin du peripherique :
	 * - GPIO : 2 a 8
	 * - AIO : 0 a 3
	 * @return the value of pin
	 */
	int getPin ();


	/**
	 * Set the value of etat
	 * Etat du peripherique.
	 * 0 si eteint.
	 * 1 si actif.
	 * @param new_var the new value of etat
	 */
	void setEtat (bool new_var);

	/**
	 * Get the value of etat
	 * Etat du peripherique.
	 * 0 si eteint.
	 * 1 si actif.
	 * @return the value of etat
	 */
	bool getEtat ();


	/**
	 * Set the value of intervalle
	 * Intervalle de valeurs acceptees (actionneurs) ou renvoyees (capteurs) par le
	 * peripherique.
	 * @param new_var the new value of intervalle
	 */
	void setIntervalle (int new_var[2]);

	/**
	 * Get the value of intervalle
	 * Intervalle de valeurs acceptees (actionneurs) ou renvoyees (capteurs) par le
	 * peripherique.
	 * @return the value of intervalle
	 */
	int* getIntervalle ();

};

#endif // PERIPHERIQUE_H
