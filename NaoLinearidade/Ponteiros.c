int *p; //ponteiro
int val = 5;

int main() {
  p = &val; // & -> endereço
  printf("O valor apontado por 'p' é: %d", *p);
  
  return 0;
}