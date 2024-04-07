int main() {

  int a = 0;

  printf("\nLaço WHILE\n");
  
  while(a<5)
  {
    printf("\nVariavel 'a' é: %d", a);
    a++; // a = a + 1;
  }

  printf("\n\nLaço FOR\n");

  // for (inicia em; vai até; de (x)degrau em degrau)
  for(int i=0 ; i<4 ; i++)
  {
    printf("\nA variavel 'i' é: %d",i);
  }
  
  return 0;
}