; 1 - Função que conta os caracteres em uma string.
(defn contarCaracteres [str]
  (count str))

; 2 - Função que conta as vogais em uma string.
(defn contarVogais [str]
  (count (filter #{'a 'e 'i 'o 'u 'A 'E 'I 'O 'U} str)))

; 3 - Função que remove todas as ocorrências de um caractere em uma string.
(defn removerOcorrencias [char str]
  (remove #{char} str))

; 4 - Função que conta quantas strings, em uma lista, não terminam com a letra 's'.
(defn contarSemS [xs]
  (count (remove #(= (last %) \s) xs)))

; 5 - Função que calcula a soma de uma lista de números inteiros.
(defn somaLista [xs]
  (apply + xs))

; 6 - Função que calcula a média de uma lista de números.
(defn mediaLista [xs]
  (/ (apply + xs) (count xs)))

; 7 - Função que inverte uma lista de inteiros.
(defn inverterLista [xs]
  (reverse xs))

; 8 - Função que calcula a área de círculos a partir de uma lista de raios.
(defn calcArea [r]
  (* Math/PI r r))

(defn calcAreas [list]
  (map calcArea list))

; 9 - Função que inverte uma string.
(defn inverterString [str]
  (reverse str))

; 10 - Função que faz uma calculadora simples.
(defn calculadora [x y op]
  (cond
    (= op "somar") (+ x y)
    (= op "subtrair") (- x y)
    (= op "multiplicar") (* x y)
    (= op "dividir") (/ x y)
    :else (throw (Exception. "Operação inválida"))))