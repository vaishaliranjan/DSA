package Recursion;

public class isSorted {
    public static boolean isSortedArray(int arr[] , int i){
        if(i==arr.length-1){
            return true;
        }
        
       if(arr[i]>arr[i+1]){
        return false;
       } 
       return isSortedArray(arr, i+1);

       
    }
    public static void main(String args[]){

        int arr[]={1,2,6,4,5};
        System.out.println(isSortedArray(arr, 0));
    }
}
