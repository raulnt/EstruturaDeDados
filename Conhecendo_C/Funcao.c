int soma(int a, int b)
{
  int s = a + b;
  return s;
}

int sub(int a, int b)
{
  int s = a - b;
  return s;
}

int main() {

  int n1, n2, op, res;

  printf("Digite um valor: ");
  scanf("%d", &n1);

  printf("Digite um valor: ");
  scanf("%d", &n2);

  printf("\nEscolha a operação:\n1 - Adição\n2 - Subtração\n");
  scanf("%d",&op);
  
  if(op == 1)
  {
    res = soma(n1, n2);
  }
  if(op == 2)
  {
    res = sub(n1, n2);
  }
  printf("O resultado é: %d", res);
  
  return 0;
}