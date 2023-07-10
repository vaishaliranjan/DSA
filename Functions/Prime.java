package Functions;

public class Prime {
    public static boolean Prime(int n){
       // boolean isPrime= true;
       if(n==2){
        return true;

       }
        for(int i=2; i<Math.sqrt(n);i++){
            //sqrt will optimised the code as root of n is very small than n to remove duplicates
            if(n%i==0){
               // isPrime=false;
               // return isPrime;
               return false;
            }
        }
       //return isPrime;
       return true;
    }
    public static void main(String args[]){
        System.out.print(Prime(5));
    }
}
