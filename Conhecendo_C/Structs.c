struct pessoa
{
  int idade;
  float altura;
};

typedef struct pessoa Pessoa;

int main() {

  Pessoa p;
  p.idade = 5;
  p.altura = 1.65;

  printf("A idade da pessoa é: %d\n", p.idade);
  printf("A altura da pessoa é: %.2f", p.altura);
  
  return 0;
}