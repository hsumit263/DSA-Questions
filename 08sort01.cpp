// You have been given an integer array/list (ARR) of size N that contains only integers, 0 and 1.Write
// a function to sort this array/list. Think of a solution which scans the array/list only once and don't 
// require use of an extra array/list.

void sortZeroesAndOne(int input[], int size)
{
    int i=0,j=size-1;
    while(i<j){
        if(input[i]==0 && i<j) i++;
        else if(input[j]==1 && i<j) j--;
        else if(input[i]==1 && input[j]==0 && i<j){
            swap(input[i],input[j]);
            i++;
            j--;
        }
    }
}
