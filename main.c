#include <stdio.h>
int main() {
    int saldo = 1000;
    int saque;
    int notas[5] = {5, 10, 20, 50, 100};
    int i =4;
    
    printf ("valor do saque: ");
    scanf("%d" ,&saque );

while (saque % 5 != 0 || saque > saldo || saque < 0) {
   printf ("valor invalido, digite novamente: ");
   scanf("%d", &saque);
}
	while (saque > 0) {
	int quantidade = saque / notas[i];
	if (quantidade > 0) {
	    printf("%d nota(s) de %d\n", quantidade, notas[i]);
	    saque -= quantidade * notas[i];
	}
	i--;
}
return 0;
}
