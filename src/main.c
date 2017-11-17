#include <stdio.h>

int main() {
  int a[5];
  int n=0, m=0;
  int i=0, j=0; /*declarei outra variável para fazer um for dentro do for e a varável m para o caso especial de não existir nenhuma tarefa executada na iteração*/
  scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &n);
  for(j=1; j<=n; j++){           /*for para cada iteração*/
     if(m==6) printf("-\n"); 
     m=0;
     for(i=0; i<6; i++){         /*for para cada tarefa a ser executanada naquela determinada iteração*/
         if(j%a[i]==0){
            printf("%d", i);
         } 
         if(j%a[i]!=0){           /*caso em que nenhuma tareda sera executada na iteração*/
         m=m+1;
         }
     }
     if(m!=6)printf("\n");
  }
  return 0;
}
