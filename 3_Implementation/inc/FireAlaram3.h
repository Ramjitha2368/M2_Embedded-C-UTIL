#ifndef __ACTIVITY_4_H__
#define __ACTIVITY_4_H__
/**
 * @file activity4.h
 * @author ramjitha
 * @brief activity4
 * @version 0.1
 * @date 2022-04-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#include <avr/io.h>

/**
 * @brief initializes registers
 * 
 * @param ubrr_value 
 */
void USARTInit(uint16_t ubrr_value);

/**
 * @brief transmits character
 * 
 * @param data 
 */
void USARTWriteChar(char data);

/**
 * @brief Passes a string character by character to USARTWriteChar(char)
 * 
 * @param data 
 */
void USARTWritestring(char data[]);

#endif /* __ACTIVITY_4_H__ */
