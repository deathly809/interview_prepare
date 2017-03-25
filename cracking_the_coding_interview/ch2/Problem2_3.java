
import java.util.ArrayList;
import java.util.Arrays;

class Problem2_3 {
    public static <T> void removeNode(node<T> n) {
        node<T> t = n.next;
        n.next = t.next;
        n.value = t.value;
    }

    private static void test(ArrayList<Integer> init, int k) {
        Node<Integer> list = new Node<Integer>();
        node<Integer> n = null;
        int pos = 0;
        for(int i : init ) {
            list.insert(i);
            if(pos == k) {
                n = list.tail;
            }
            ++pos;
        }

        try {
            System.out.println(k+": "+list);
            removeNode(n);
            System.out.println(list);
        } catch(Exception e) {
            System.out.println("out of bounds");
        } finally {
            System.out.println();
        }
    }

    public static void main(String[] args) {
        test(new ArrayList<Integer>(Arrays.asList()),0);
        test(new ArrayList<Integer>(Arrays.asList(1)),0);
        test(new ArrayList<Integer>(Arrays.asList(1,2,3,4)),0);
        test(new ArrayList<Integer>(Arrays.asList(1,2,3,4)),1);
        test(new ArrayList<Integer>(Arrays.asList(1,2,3,4)),2);
        test(new ArrayList<Integer>(Arrays.asList(1,2,3,4)),3);
    }
}
