/*********************************************
Dise�ado Ing. Jaime Pedraza
Marzo 05 de 2019
*********************************************/
/*
@file		wiegand.h
@brief	header file for delay.c
*/

#ifndef _UART_H_
#define _UART_H_
/*funciones prototipo*/

void com_initialize (void);
void tx_chr (unsigned char data_com);
void Debug_chr_uart(unsigned char Dat);
void Debug_txt_uart(unsigned char * str);
void EscribirCadenaSoft(unsigned char tamano_cadena);

#endif	/* _UART_H_ */