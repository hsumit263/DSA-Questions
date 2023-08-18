// You are given an array 'ARR' of size 'N' containing each number between 1 and 'N'-1 at least once.
// There is a single integer value that is present int he array twice. 
// Your task is to find the duplicate integer value present in the array.


int findUnique(int *arr, int size)
{
      int a=0;
      for(int i=0;i<size;i++){
          a=a^arr[i];
      }
      return a;
}
