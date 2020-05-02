/**
 * @file	time.h
 * @brief	Biblioteka za rad sa tajmerom 0
 * @author	Boris Radovanovic
 * @date	01-05-2020
 */
#ifndef TIME_H_
#define TIME_H_

/**
 * Funkcija inicijalizuje tajmer 0
 */
void initTime();

/**
 * Funkcija vraca proteklo sistemsko vreme
 * @return	vreme u milisekundama
 */
unsigned long millis();

/**
 * Funkcija pravi pauzu zeljene duzine
 * @param	d -> duzina pauze u milisekundama
 * @return
 */
void delay(unsigned long d);

#endif /* TIME_H_ */
