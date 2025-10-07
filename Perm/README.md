## Retornando problemas primeiro

### Contexto
Imagine um sistema de acesso seguro onde é necessário atender a várias condições para conceder permissão. 
Por exemplo, ao tentar acessar uma informação importante em um sistema, você precisa garantir que está conectado à rede, autenticado e com permissões administrativas.

Implemente um programa que verifique três condições necessárias para acessar um sistema: conexão ao Wi-Fi, autenticação do login e permissões de administrador. O programa deve imprimir a mensagem de erro correspondente à primeira condição que falhar, ou indicar sucesso caso todas as condições sejam atendidas. 
Utilize a lógica das negações para simplificar a estrutura das verificações no código, evitando aninhamentos desnecessários de if else.

### Entrada
- Três valores booleanos (0 ou 1):
  - wifi: se está conectado ao Wi-Fi (1 para verdadeiro (true) e 0 para falso (false)).
  - login: se o login foi feito (1 para verdadeiro (true) e 0 para falso (false)).
  - admin: se o acesso é de um administrador (1 para verdadeiro (true) e 0 para falso (false)).

### Saída
- Se wifi for false: “you must connect to wifi”.
- Se login for false: “you need to login first”.
- Se admin for false: “you must login as admin”.
- Caso todos sejam verdadeiros: “done”.
