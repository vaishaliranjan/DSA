package BinaryTrees;

public class SubTree {
    public static class Node {
        int data;
        Node left, right;

        public Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    public static boolean traverse(Node root, Node subroot) {
        if (root == null) {
            return false;
        }
        if (root.data == subroot.data) {
            if (isIdentical(root, subroot)) {
                return true;
            } else {
                return false;
            }
        }
        return traverse(root.left, subroot) || traverse(root.right, subroot);
    }

    public static boolean isIdentical(Node node, Node subroot) {
        if (node == null && subroot == null) {
            return true;
        } else if (node == null || subroot == null || node.data != subroot.data) {
            return false;
        }

        if (!isIdentical(node.left, subroot.left)) {
            return false;
        }
        if (!isIdentical(node.right, subroot.right)) {
            return false;
        }
        return true;
    }

    public static void main(String args[]) {

        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.right.right = new Node(6);

        Node subroot = new Node(2);
        subroot.left = new Node(4);
        // subroot.right = new Node(5);
        System.out.println(traverse(root, subroot));

    }
}
