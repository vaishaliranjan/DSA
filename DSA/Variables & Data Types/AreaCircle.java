import java.util.*;
public class AreaCircle {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter radius r: ");
        float r= sc.nextFloat();
    

        float area = 3.14f *r*r;
        System.out.print("The Area is ");
        System.out.print(area);
        
    }
}
