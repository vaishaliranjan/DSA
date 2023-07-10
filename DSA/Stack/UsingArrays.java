package Stack;
import java.util.*;
public class UsingArrays {
    public static class Stack{
        static ArrayList<Integer> list= new ArrayList<>();

        //empty or not
        public static boolean isEmpty(){
            return list.size()==0;
        }
        //push
        public static void push(int data){
            list.add(data);
        }
        //pop
        public static int pop(){
            if(isEmpty()){
                return -1;
            }
            int top= list.get(list.size()-1);
            list.remove(list.size()-1);
            return top;
        } 
        //peak
        public static int peek(){
            return list.get(list.size()-1);
        }

    }
    public static void main(String args[]){
        Stack s= new Stack();
        s.push(1);
        s.push(2);

        while(!s.isEmpty()){
            System.out.println(s.peek());

            s.pop();


        }

    }
}
