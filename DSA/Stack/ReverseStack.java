package Stack;
import java.util.Stack;
public class ReverseStack {
    public static void pushAtBottom(Stack<Integer> s, int data){

        if(s.isEmpty()){
            s.push(data);
            return;
        }
        int val=s.pop();
        pushAtBottom(s, data);
        s.push(val);
    }
    public static void reverseStack(Stack<Integer> s){

        if(s.isEmpty()){
            return;
        }

        int val= s.pop();
        reverseStack(s);
        pushAtBottom(s,val);
    }
    public static void print(Stack<Integer> s){

        while(!s.isEmpty()){
            System.out.println(s.pop());
        }
    }
    public static void main(String args[]){
        Stack<Integer> s=new Stack<>();
        s.push(1);
        s.push(2);
        s.push(3);
        reverseStack(s);
        print(s);
    }
}
