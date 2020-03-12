# *Tips and tricks* para programação competitiva

## Boas praticas

* Verificar primeiramente a complexidade do algoritmo proposto como solução. Ter como base o número máximo de operações por segundo como sendo $10^8$. Qualquer solução que precise de mais que isso, possívelmente deverá ser descartada.
* Usar sempre os valores máximos fornecidos no enunciado. Especialmente útil para criar vetores sem a necessidade de alocar memória dinamicamente.

## Valores que podem ser úteis

* Um inteiro de 32 bits consegue guardar valores de até (aproximadamente) $2*10^9$.

## Evitar divisão por 0 (inteiros)

* Utilização da função **max** da biblioteca *algorithm*:
  ```
  x = y / max(1, n);
  ```
  Em caso de $n = 0$, a função **max** retorna o maior valor 1, efetuando uma divisão por 1.
