# Set de Problemas #3

Ejercicios sobre estructuras de control repetitivas del curso de programación orientada a objetos 1 (CS1102).

## Ejercicio #1 - Numero al reves  

### Problem Statement  

Escribir un programa que dado un número de `n` dígitos lo imprima al reves (utilizar bucles).

#### Input Format  

```cpp
1234
```

#### Constraints  

```cpp
No utizar etiquetas
```

#### Output Format

```cpp
4321
```
#### Ejemplo 1
**Input**
```cpp
2120
```
**Output**
```cpp
212
```
#### Ejemplo 2
**Input**
```cpp
21001
```
**Output**
```cpp
10012
```
## Ejercicio #2 - Buscando el mayor  

### Problem Statement

Diseñar un programa que determine de `n` números el mayor de todos, el programa debera de solicitar primero una cantidad n de números y posteriormente solicitará cada uno de los números, mostrando como resultado el valor maximo ingresado `El maximo valor es: 9999` donde 9999 representa el maximo número encontrado.   

#### Input Format
```cpp
4   // representa n, la cantidad de números a ingresar. 
1
10
4
20
```
Constraints
```cpp
No debe utilizarse etiquetas (`std::cout`) para ingresar los valores
```
Output Format
```cpp
El maximo valor es: 20
```
#### Ejemplo 1
**Input**
```cpp
3
10
-1
100
```
**Output**
```cpp
El maximo valor es: 100
```
#### Ejemplo 2
**Input**
```cpp
4
-1
-10
-20
-50
```
**Output**
```cpp
El maximo valor es: -1
```

## Ejercicio #3 - Número perfecto

### Problem Statement  
Un número es Perfecto, cuando el número es igual a la suma de sus divisores positivos menores que él.  

El 6 es un número perfecto porque la suma de sus divisores  
```cpp
1 + 2 + 3  es igual a 6.
```

El  28 es un número Perfecto, porque la suma de sus divisores  
```cpp
1 + 2 + 4 + 7 + 14 es igual a 28  
```
Diseñar un programa, que lea un número entero e imprima `perfecto` si el número es perfecto o imprima `imperfecto` si el número no fuera.

Input Format
```cpp
6
```

Constraints
```cpp
- Números enteros
- No utilizar etiquetas
```

Output Format
```cpp
perfecto
```
#### Ejemplo 1
**Input**
```cpp
11
```
**Output**
```cpp
imperfecto
```
#### Ejemplo 2
**Input**
```cpp
28
```
**Output**
```cpp
perfecto
```
## Ejercicio #4 - Triángulo

### Problem Statement
Escribir un programa que dibuje un triángulo de tamaño `n` y que solicite el cáracter del borde y el cáracter de fondo.  

## Input Format
```cpp
5
x
o
```
## Constraints
```cpp
- No utilizar etiquetas
```
## Output Format
```cpp
    x 
   x x 
  x o x 
 x o o x 
x x x x x 
```
#### Ejemplo 1
**Input**
```cpp
2
*
.
```
**Output**
```cpp
 *
* * 
```
#### Ejemplo 2
**Input**
```cpp
8
#
-
```
**Output**
```cpp
       # 
      # # 
     # - # 
    # - - # 
   # - - - # 
  # - - - - # 
 # - - - - - # 
# # # # # # # #
```

## Ejercicio #5 - Minima multiplicación

### Problem Statement
Diseñe la función `minima_multiplicación` que cuente la cantidad de veces que se debe multiplicar sus digitos para obtener un número de un solo digito y que lo retorne como un valor entero.

Ejemplo: 

- El número `39` debe multiplicarse 3 veces 1)`3*9 == 27` 2)`2*4 == 14` 3)`1*4 == 3`.  
- El número `3`  debe multiplicarse 0 veces debido a que tiene un dígito.  
- El número `999`  debe multiplicarse 4 veces 1)`9*9*9 == 729` 2)`7*2*9 == 126` 3)`1*2*6 == 12` .  

### Input Format
```cpp
919
```
### Constraints
```cpp
- No utilizar etiquetas
```
### Output Format
```cpp
2
```
#### Ejemplo 1
**Input**
```cpp
39
```
**Output**
```cpp
3
```
#### Ejemplo 2
**Input**
```cpp
2
```
**Output**
```cpp
0
```