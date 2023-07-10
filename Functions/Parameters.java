package Functions;
import java.util.*;
public class Parameters {
    public static int Sum(int a, int b){ //parameters or formal parameters
        int sum=a+b;
        return sum;
    }
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int a= sc.nextInt();
        int b = sc.nextInt();
        int sum = Sum(a,b); //arguments or actual parameters-a,b
        System.out.print("Sum: "+sum);
    }
}
