## Arredondar número

### Contexto
Um aluno ficou implorando para o seu professor de FUP arredondar seu 6.9999999999 para 10 porque ele precisa de um 10 para passar de semestre. Seu trabalho é implementar as funções ceil, floor e round para ajudar o professor a calcular as notas dos alunos.

Implemente três funções:

- ceil: que sempre arredonda para cima
- floor que sempre arredonda para baixo
- round: que arredonda para baixo se a parte fracionária for menor que 0.5 e para cima se for maior ou igual a 0.5.

Os protótipos das funções são em C:
- int round(float num);
- int floor(float num);
- int ceil(float num);

Na função principal (main), leia um caractere que representa a operação (r, f, c) e um número do tipo float. Depois, chame a função correspondente e imprima o resultado.

### Entrada
- Um caractere (r, f ou c) representando a operação.
- Um número float

### Saída
- Imprima um inteiro de acordo com a operação pedida.
