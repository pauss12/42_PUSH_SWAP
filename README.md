# ️ push_swap - 42 Madrid 

## Descripción 

Este proyecto tiene como objetivo desarrollar un programa en C que ordene una pila de números enteros utilizando un conjunto limitado de operaciones. El programa debe encontrar la solución más eficiente posible para ordenar la pila. 

### ¿Qué es push_swap? 

`push_swap` es un desafío de optimización  que simula el ordenamiento de una pila de números enteros utilizando dos pilas (A y B) y un conjunto predefinido de operaciones. El objetivo es minimizar el número de operaciones necesarias para ordenar la pila A. 

## Operaciones permitidas ⚙️

* **sa (swap a):** Intercambia los dos primeros elementos de la pila A.
* **sb (swap b):** Intercambia los dos primeros elementos de la pila B.
* **ss:** `sa` y `sb` al mismo tiempo.
* **pa (push a):** Toma el primer elemento de la pila B y lo coloca en la parte superior de la pila A.
* **pb (push b):** Toma el primer elemento de la pila A y lo coloca en la parte superior de la pila B.
* **ra (rotate a):** ⬆️ Desplaza todos los elementos de la pila A una posición hacia arriba. El primer elemento se convierte en el último.
* **rb (rotate b):** ⬆️ Desplaza todos los elementos de la pila B una posición hacia arriba. El primer elemento se convierte en el último.
* **rr:** `ra` y `rb` al mismo tiempo.
* **rra (reverse rotate a):** ⬇️ Desplaza todos los elementos de la pila A una posición hacia abajo. El último elemento se convierte en el primero.
* **rrb (reverse rotate b):** ⬇️ Desplaza todos los elementos de la pila B una posición hacia abajo. El último elemento se convierte en el primero.
* **rrr:** `rra` y `rrb` al mismo tiempo.

## Cómo usar 

1.  **Clonar el repositorio:** 

    ```bash
    git clone git@github.com:pauss12/42_PUSH_SWAP.git push_swap
    cd push_swap
    ```

2.  **Compilar el programa:** 

    ```bash
    make
    ```

3.  **Ejecutar el programa:**
  
    ```bash
    ./push_swap <lista_de_números_enteros>
    ```

    Reemplaza `<lista_de_números_enteros>` con los números que deseas ordenar.

    Ejemplo:

    ```bash
    ./push_swap 2 1 3 6 8
    ```

## Algoritmos implementados 

* **Ordenamiento para listas pequeñas:** Se implementan algoritmos optimizados para ordenar listas de hasta 5 números.
* **Ordenamiento para listas grandes:** Se utiliza un algoritmo más complejo y eficiente para ordenar listas de mayor tamaño. (puedes añadir aquí una explicación sobre el algoritmo que has utilizado)

## Control de errores 

El programa maneja los siguientes errores:

* Argumentos inválidos ❌ (no son números enteros).
* Números duplicados .
* Falta de argumentos ⚠️.

## Créditos 

Este proyecto fue desarrollado por pmendez- como parte del plan de estudios de 42 Madrid. 
