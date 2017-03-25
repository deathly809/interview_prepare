
class Node<T> {

    public node<T> head, tail;

    public void insert(T value) {
        node<T> n = new node<T>();
        n.value = value;
        n.next = null;

        if(head == null) {
            head = tail = n;
        } else {
            tail.next = n;
            tail = n;
        }
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("[");
        if(head != null) {
            node<T> c = head;
            sb.append(c.value);
            c = c.next;
            while(c != null) {
                sb.append(", ");
                sb.append(c.value);
                c = c.next;
            }
        }
        sb.append("]");
        return sb.toString();
    }
}
