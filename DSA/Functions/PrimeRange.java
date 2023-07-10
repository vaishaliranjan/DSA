package Functions;

public class PrimeRange {
    public static boolean Prime(int n){
         for(int i=2; i<n;i++){
             if(n%i==0){
                return false;
             }
         }
        return true;
     }

    public static void PrimeinRange(int n){
        for(int i=2;i<=n;i++)
        {
            if(Prime(i)){
                System.out.println(i);
            }
        }
    }
    public static void main(String args[]){
        PrimeinRange(10);
    }
}
