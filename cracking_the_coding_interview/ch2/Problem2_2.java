
import java.util.ArrayList;
import java.util.Arrays;

class Problem2_2 {
    public static <T> T getKthFromLast(node<T> n, int k) {
        node<T> curr = n;
        for(int i = 0 ; i <= k; ++i) {
            if(curr == null) throw new RuntimeException("not enough elements");
            curr = curr.next;
        }
        while(curr != null) {
            curr = curr.next;
            n = n.next;
        } 
        return n.value;
    }

    private static void test(ArrayList<Integer> init, int k) {
        Node<Integer> list = new Node<Integer>();
        for(int i : init ) {
            list.insert(i);
        }

        try {
            System.out.println(list);
            System.out.println(getKthFromLast(list.head, k));
        } catch(Exception e) {
            System.out.println("not enough elements");
        } finally {
            System.out.println();
        }
    }

    public static void main(String[] args) {
        test(new ArrayList<Integer>(Arrays.asList()),0);
        test(new ArrayList<Integer>(Arrays.asList(1)),0);
        test(new ArrayList<Integer>(Arrays.asList(1,2,3)),0);
        test(new ArrayList<Integer>(Arrays.asList(1,2,3)),1);
        test(new ArrayList<Integer>(Arrays.asList(1,2,3)),2);
        test(new ArrayList<Integer>(Arrays.asList(1,2,3)),3);
    }
}
