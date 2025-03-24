#pragma once
class Calculator
{
public:
	/**
	 * @brief Calcul le produit des nombres entiers strictement positifs inf�rieurs
	 * ou �gaux � l'entier a
	 * @param a entier positif
	 * @return le produit des nombres entiers strictement positifs inf�rieurs
	 * ou �gaux � l'entier a
	 */
	int factorielle(int a);

	/**
	 * @brief Calcul la somme des entiers a et b
	 * 
	 * @param a 
	 * @param b 
	 * @return int 
	 */
	int add(int a, int b);

	/**
	 * @brief Calcul la soustraction entre les entiers a et b
	 * 
	 * @param a 
	 * @param b 
	 * @return int 
	 */
	int sub(int a, int b);

	/**
	 * @brief Calcul la division de a par b
	 * 
	 * @param a 
	 * @param b 
	 * @return double 
	 */
	double div(double a, double b);

	/**
	 * @brief Calcul le produit de a par b
	 * 
	 * @param a 
	 * @param b 
	 * @return int 
	 */
	int mult(int a, int b);

	/**
	 * @brief Calcul la puissance de a par b
	 * 
	 * @param a 
	 * @param b 
	 * @return int 
	 */
	int power(int a, int b);
};