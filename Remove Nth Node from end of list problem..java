import java.util.*;

public class LinkedList {
    public static class ListNode {
        int data;
        ListNode next;

        public ListNode(int data) {
            this.data = data;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ListNode head = null;
        ListNode tail = null;

        System.out.println("Enter integers to create a linked list. Enter -1 to stop.");

        int userInput;
        while (true) {
            System.out.print("Enter an integer: ");
            userInput = scanner.nextInt();

            if (userInput == -1) {
                break;
            }

            ListNode newNode = new ListNode(userInput);

            if (head == null) {
                head = newNode;
                tail = newNode;
            } else {
                tail.next = newNode;
                tail = newNode;
            }
        }
        System.out.println("Enter the value of n");
        int n=scanner.nextInt();

        ListNode head1=removeNthFromEnd(head,n);
        printLinkedList(head1);

        scanner.close();
    }

    public static void printLinkedList(ListNode head) {
        ListNode current = head;
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }
    
    public static ListNode removeNthFromEnd(ListNode head, int n) {
    ListNode dummy = new ListNode(0);
    dummy.next = head;
    ListNode fast = dummy;
    ListNode slow = dummy;
    
    // Move the fast pointer n nodes ahead.
    for (int i = 0; i <= n; i++) {
        fast = fast.next;
    }
    
    // Move both pointers until the fast pointer reaches the end.
    while (fast != null) {
        fast = fast.next;
        slow = slow.next;
    }
    
    // Remove the nth node from the end by adjusting the pointers.
    slow.next = slow.next.next;
    
    return dummy.next; 
}
}
