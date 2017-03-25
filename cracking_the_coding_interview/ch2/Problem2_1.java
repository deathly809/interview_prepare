
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Arrays;

class Problem2_1 {
    public static <T> void removeDuplicatesFromList(node<T> n) {
        HashMap<T,Boolean> seen = new HashMap<T,Boolean>();
        node<T> curr = n;
        node<T> prev = null;
        while(curr != null) {
            if(seen.containsKey(curr.value)) {
                prev.next = curr.next;
            } else {
                seen.put(curr.value,true);
                prev = curr; 
            }
            curr = curr.next;
        } 
    }

    private static void test(ArrayList<Integer> init) {
        Node<Integer> list = new Node<Integer>();
        for(int i : init ) {
            list.insert(i);
        }

        System.out.println(list);
        removeDuplicatesFromList(list.head);
        System.out.println(list);
        System.out.println();
    }

    public static void main(String[] args) {
        test(new ArrayList<Integer>(Arrays.asList(1,2,3)));
        test(new ArrayList<Integer>(Arrays.asList(1,2,1)));
    }
}
