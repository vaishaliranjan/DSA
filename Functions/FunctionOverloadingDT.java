package Functions;

public class FunctionOverloadingDT {
    public static int sum(int a, int b){
        return a+b;
    }

    public static float sum(float a, float b){
        return a+b;
    }
    public static void main(String args[]){
        
        System.out.println(sum(2,4));
        System.out.println(sum(2.3f, 4.5f));
    }
}
