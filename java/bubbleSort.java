class Main{
  public static void main(String args[]){
    int array[]={1,6,3,5,89,14,10};
    bubbleSort(array);
    for(int i=0;i<array.length;i++){
      System.out.print(array[i]+" ");
    }
  }

  public static void bubbleSort(int array[]){
    int n=array.length;
    for(int i=0;i<n;i++){
      boolean swapped=false;
      for(int j=0;j<n-1-i;j++){
        if(array[j]>array[j+1]){
          int temp=array[j];
          array[j]=array[j+1];
          array[j+1]=temp;
          swapped=true;
        }
      }
      if(swapped==false){
        break;
      }
    }
  }
}
