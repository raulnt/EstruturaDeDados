int main() {

  int a, b, c;
  
  printf("Digite um número: ");
  scanf("%d", &a);
  printf("Digite um número: ");
  scanf("%d", &b);
  printf("Digite um número: ");
  scanf("%d", &c);

  // && Todas devem ser verdadeiras
  // || "OU"
  
  if(a==b && b==c)
  {
    printf("a, b, c tem valores iguais");
  }
  
  return 0;
}