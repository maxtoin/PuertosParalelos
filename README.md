# PuertosParalelos
En el siguiente programa, se lee el valor presente en el Puerto C, en el que hay conectados a cada línea un pulsador y el valor leído se manda al Puerto B, donde hay conectados 8 LEDs. Tanto los pulsadores, como los LEDs, están disponibles en la placa de practicas STK128+.

En el caso de los pulsadores, nótese que no incorporan ninguna resistencia que fije un nivel de tensión cuando están abiertos (sin pulsar ). Esto hay que tenerlo en cuenta en el programa, habilitando las resistencias de pull-up del Puerto C (entrada), lo que hará que cuando estén abierto (sin pulsar) se lea un 1 y al cerrarlos (a masa) se lea un 0.
