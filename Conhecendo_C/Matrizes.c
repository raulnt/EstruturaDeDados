int mat[2][2];

int main() {

  for(int i=0; i<2; i++)
  {
    for(int j=0; j<3; j++)
    {
      printf("Digite um numero: ");
      scanf("%d", &mat[i][j]);
    }
  }

  for(int i=0; i<2; i++)
  {
    for(int j=0; j<3; j++)
    {
      printf("\nO valor de mat[%d][%d] = %d", i, j, mat[i][j]);
    }
  }
  
  
  return 0;
}