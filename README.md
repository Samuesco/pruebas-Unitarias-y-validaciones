# Pruebas unitarias
> Framework de pruebas a utilizar `gTests`. Más información en https://google.github.io/googletest/primer.html

# Configuracion de gTest
Su proyecto debe incluir:
* Librería de gTest. Úbiquela en una nueva carpeta que llame lib
* Tres makefiles
    1. Makefile para el proyecto general
    2. Un Makefile para los archivos de prueba. Ubique estos archivos en una nueva carpeta llamada `test`
    3. Un Makefile para el código fuente del proyecto. Ubique el código fuente del proyecto en una carpeta llamada `src`


# Extensión
1. Agrege una nueva clase con los atributos y métodos que requiera para dar respuesta a las siguientes funcionalidades:
  * Agregar un número a un vector de enteros.
  * Eliminar un número de un vector de enteros.
  * Identificar si ya existe o no un número en el vector. 
  * Retornar un mensaje personalizado dado un parámetro de entrada. El mensaje personalizado debe incluir el parámetro de entrada
  * Hacer una multiplicación de dos números en donde los dos números a multiplicar deben ser mayores a cinco
  * Hacer una resta asegurando que el resultado sea siempre un número negativo.
  * Dada una cadena de entrada retornar la cantidad de vocales que tiene la cadena

2. Agrege una nueva clase de prueba en la carpeta `test` y elabore tantas pruebas como considere necesarias para los métodos que implementó.
Tenga en cuenta que en sus pruebas debe considerar el flujo básico y también los casos en los que pueden haber errores porque por ejemplo no 
   se encuentra el elemento buscado. 
   
> Para correr las pruebas sólo es necesario que de click en la opción `calculator_test` que aparece en las opciones de compilación.
> 