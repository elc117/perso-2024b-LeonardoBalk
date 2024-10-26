-- 1 - Função que conta os caracteres em uma string.
contarCaracteres :: String -> Int
contarCaracteres str = length str

-- 2 - Função que conta as vogais em uma string.
contarVogais :: String -> Int
contarVogais str = length [c | c <- str, c `elem` "aeiouAEIOU"]

-- 3 - Função que remove todas as ocorrências de um caractere em uma string.
removerOcorrencias :: Char -> String -> String
removerOcorrencias char str = [c | c <- str, c /= char]

-- 4 - Função que conta quantas strings, em uma lista, não terminam com a letra 's'.
contarSemS :: [String] -> Int
contarSemS xs = length $ filter (\x -> last x /= 's') xs

-- 5 - Função que calcula a soma de uma lista de números inteiros.
somaLista :: [Int] -> Int
somaLista xs = sum xs

-- 6 - Função que calcula a média de uma lista de números.
mediaLista :: [Float] -> Float
mediaLista xs = foldl (+) 0 xs / fromIntegral (length xs) -- fromIntegral transforma o número de float pra int, como o tamanho da lista deve ser inteiro, isso deve ser feito


-- 7 - Função que inverte uma lista de inteiros.
inverterLista :: [Int] -> [Int]
inverterLista xs = reverse xs

-- 8 - Função que calcula a área de círculos a partir de uma lista de raios.
calcArea :: Float -> Float
calcArea r = pi * r^2

calcAreas :: [Float] -> [Float]
calcAreas list = map calcArea list

-- 9 - Função que inverte uma string.
inverterString :: String -> String
inverterString str = reverse str

-- 10 - Função que faz uma calculadora simples.
calculadora :: Float -> Float -> String -> Float
calculadora x y op
  | op == "somar" = x + y
  | op == "subtrair" = x - y
  | op == "multiplicar" = x * y
  | op == "dividir" = x / y
  | otherwise = error "Operação inválida"
