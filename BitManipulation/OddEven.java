package BitManipulation;

public class OddEven {
    public static void oddOrEven(int n){
        int bitmask=1;
        if((n&bitmask)==0){
            System.out.println("Even");
        }
        else{
            System.out.println("Odd");
        }
    }
    public static void main(String args[]){
        int n=010;
        oddOrEven(n);

    }
}
