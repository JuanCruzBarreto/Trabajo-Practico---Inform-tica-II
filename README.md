Trabajo Practico Informatica II
-------------
Maquinas de Estado 
-------------
### Control de llenado de Tanques 

> Barreto Juan Cruz - 2°11° 

#### - Memoria Descriptiva 

 > El objetivo de este sistema es controlar y monitorear el llenado de un tanque asegurándose que no se sobrepase del 95% de su capacidad y que se vuelva a llenar automáticamente cuando cuando el nivel cae por debajo del 25%.
 
 

####  - Componentes del Sistema
 ***1.	Sensor de nivel:***
Se instalara un sensor de nivel en el tanque para medir continuamente el nivel del líquido.

 ***2.	Controlador:***
El controlador del sistema recibirá la señal del sensor de nivel y tomara decisiones en los valores medidos.

 ***3.	Válvula de llenado:***
La válvula se instalara para suministrar líquido al tanque.

 ***4.	Alarma:***
Se instalara una alarma que se activara si el nivel del tanque supera el 100% de su capacidad.

####  - Funcionamiento 

 ***1.	Llenado Normal:***
Cuando el nivel del tanque está por debajo del 95%, el controlador permitirá que la válvula de llenado suministre líquido  al tanque hasta que alcance el 95%. El controlador supervisara constantemente el nivel del tanque. 

 ***2.	Alarma de Sobrellenado:***
Si el sensor de nivel detecta un valor mayor al 95% se activara una alarma.

 ***3.	Reabastecimiento automático:***
Si el nivel del tanque cae por debajo del 25%, el controlador abriría la válvula automáticamente para volver a llenar el tanque. 


#### - Maquina de Estado 

[![TP-JUAN.png](https://i.postimg.cc/TYbfFpbV/TP-JUAN.png)](https://postimg.cc/nCnyQV0r)







