### [Theremin](https://github.com/reverte04/arduino/blob/main/SNIPPET_KILL_SWITCH.CPP)

Snippet (fuente)

1. Montar proyecto escogido +  añadir botón que anule todo

Vamos a añadir una funcionalidad a un proyecto anterior.
En el grupo estoy yo. Y voy a hacer el proyecto de la interfaz de nave espacial.

A [este proyecto](https://github.com/jjksimp/arduino/blob/main/interfaz.md) voy a añadir un botón que lo apague y lo encienda.

📷 Capturas del proceso de programación: 📷
------

![Captura de pantalla de 2021-11-30 13-03-08](https://user-images.githubusercontent.com/90753482/144044038-f8540f6e-d289-4a05-801b-06f302c58cea.png)
![Captura de pantalla de 2021-11-30 13-03-52](https://user-images.githubusercontent.com/90753482/144044081-1df3ea8a-01c4-42e3-a968-86a874f8bf21.png)
------

🔖 A la programación del proyecto de la nave espacial se le tuvo que hacer algunas modificaciones al código poque ciertas variables ya habían sido escritas en el programa cuando el proyecto se hizo originalmente. Al agregar las nuevas variables tuve que cambiar, por ejemplo tuve que cambiar el nombre del SwitchState a SwitchStateKill, y el "pinMode(ledPin, OUTPUT)" a "pinMode(buttonPin, INPUT)" porque estaba mal escrito en el Snippet.


🔖 En cuanto al circuito se le agregó un botón nuevo al pin 6~
