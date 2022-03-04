#include <stdio.h>

int main(void){
  int men;
  
  printf("Enter the total number of our men: ");
  scanf("%d", &men);
  
  int arr[men];
  
  for(int i = 0; i < men; i++){
    printf("Men #%d: ", i+1);
    scanf("%d", &arr[i]);
  }
    int a, b;
  int enemy[2];
  for(int i = 0; i < sizeof(enemy)/sizeof(enemy[0]); i++){
    printf("Enemy #%d: ", i+1);
    scanf("%d", &enemy[i]);
    
  }
  printf("\n");

  printf("Men Cornered:\n");
  for(int i = 0; i < men; i++){
    if(arr[i] >= enemy[0] && arr[i] <= enemy[1]){
      printf("%d ", arr[i]);
    }
  }
  
  return 0;
}
