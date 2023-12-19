//vetor- elementos do mesmo tipo em sequência acessados em índices

int main(){

//vetor de tamanho 5
int idades[5];

// vetor identifica automaticamente o tamanho;
int numeros[] = (1,3,7,9,2,13,6);

//vetor que armazena caracteres
char letras[28];

//estrutura da declaração de elementos no vetor de caracterez
char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

//armazena números quebrados e grandes
double notas[3] = {7.8, 9, 8.5}

// os indices de acesso de um elemento do vetor sempre correspondem a (tamanho - 1), já que devemos iniciar a contagem dos índices do do 0:
 int numeros[] = (1,3,7,9,2,13,6); //tamanho do vetor= 7, índice máximo = 6
    printf("%d", numeros[0]) // printa o número: 1
    printf("%d", numeros[4]) // printa o número: 2

//printar vetor completo com estrutura de repetição:
  for(i=0; i<7; i++){
      printf("%d ", numeros[i]);
  }

  //escanear vetor pelo teclado:
  for(i=0; i<5; i++){
    printf("digite o valor:");
    scanf("%d", idades[i]);
  }

  //preencher o vetor com números aleatórios:
  for(i=0; i<5; i++)
    numeros[6] = rand();

    //preencher o vetor com números aleatórios dentro de um intervalo:
  for(i=0; i<5; i++)
    numeros[6] = rand() % 10; // os números gerados esstarão entre 0 e 10;
return 0;
}



