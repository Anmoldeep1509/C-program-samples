#include<stdio.h>
#include<string.h>

char findMissingLetter(char array[], int arrayLength)
{
  char miss='\0';
  int i=0;
  
  while(i<arrayLength&&miss!='\0')
  {
    if(array[i+1]-array[i]!=1)
    {
      miss=(array[i])+1;
      break;
    }
    else
    {
      i++;
      continue;
    }
  }
  return miss;
}

int main(int argc, char const *argv[])
{
    int ans;
    char arr1[] = { 'a','b','c','d','f'};
    char arr2[] = { 'O','Q','R','S'};
    // ans=(findMissingLetter(arr1, 5)=='e')?findMissingLetter(arr1, 5):0;
    // ans=findMissingLetter(arr1, 5);
    printf("%d\n", findMissingLetter(arr1, 5));
    // ans=(findMissingLetter(arr2, 4)=='P')?findMissingLetter(arr2, 4):0;
    // ans=findMissingLetter(arr2, 4);
    printf("%d\n", findMissingLetter(arr2, 4));

  return 0;
}
