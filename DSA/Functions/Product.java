package Functions;

public class Product {
    public static int product(int a, int b){
        int product=a*b;
        return product;
    }
    public static void main(String args[]){
        int a=10;
        int b=5;
       
        int prod=  product(a,b);
        System.out.println("Product: "+prod);
       
    }
}
