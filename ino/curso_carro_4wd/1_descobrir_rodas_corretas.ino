

/*
-> Imagine um carro de brinquedo com 4 rodas
-> As rodas dianteiras (1, 2) e traseiras (3, 4) são horizontais a si mesmas
-> Ou seja:

    1    2

    3    4

-> O problema é que ao conectar os fios soldados ao motor, na "Shield", a ordem dos fios pode sair errada
-> E como se sabe disso? Somente ao executar o código compilado mexendo os motores (1, 2) ou (3, 4) juntos
-> Para a ordem estar certa, é preciso, antes de mais nada, criar uma referência p/ o que será a frente do carro
-> Após escolher o que é (frente) e (trás), os testes podem começar
-> Se as rodas 1 e 2 se mexerem na mesma direção (da <- p/ ->), então OK, senão: cabos na "shield" devem ser trocados
-> Se as rodas 3 e 4 se mexerem na mesma direção (da -> p/ <->), então OK, senão: cabos na "shield" devem ser trocados
*/
