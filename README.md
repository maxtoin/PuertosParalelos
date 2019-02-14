# Puertos Paralelos

Prueba de concepto para sistemas digitales y microprocesadores por el cual leeremos el valor presente en el Puerto C, en el que hay conectados a cada línea un pulsador y el valor leído se mandará al Puerto B, donde hay conectados 8 LEDs. Tanto los pulsadores, como los LEDs, están disponibles en la placa STK128+. 

Para su buen funcionamiento, ya que los pulsadores no incorporan ninguna resistencia que fije el nivel de tensión cuando están abiertos ( sin pulsar), habilitaremos en el programa las resistencias pull-up del Puerto C, lo que hará que cuando esten abiertos se lea un 1 y al cerrarlos se lea un 0
