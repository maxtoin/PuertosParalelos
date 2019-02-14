/*
 * PC a PB.c
 *
 * Created: 13/02/2019 15:23:49
 * Author :Antonio Blas Garcia
  
* Lee el Puerto C y manda valor leido al Puerto B
* Dada la configuracion de los pulsadores conectados al Puerto C, hay que
* habilitar las resistencias de pull-up, mandando FF a la direccion del
* Puerto C. El bit PUD en el registro SFIOR esta por defecto a 0
* (habilita resistencias).
* Al activar el pulsador (se pone a masa), el LED asociado se apaga. 
*/

#include <avr/io.h> // Incluye mnemotecnicos

int main(void)
{
DDRB =  0xFF; // Puerto B como salida
PORTC = 0XFF; // Habilita resist. pull-up
//SFIOR= Bit PUD a 0 por defecto. Resist. pull-sup habilitadas
while(1) // Bucle infinito
{
PORTB = PINC; // Lee Puerto C y manda al Puerto B
}
} // Fin main
