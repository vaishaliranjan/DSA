package LinkedList;
import java.util.LinkedList;

public class InbuiltJVC {
    public static class Node{
        int data;
        Node next;

        public Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    public static void main(String args[]){
        LinkedList<Integer> ll=new LinkedList<>();
        ll.addFirst(2);
        ll.addFirst(1);
        ll.addLast(3);
        System.out.println(ll);
        
    }
}
