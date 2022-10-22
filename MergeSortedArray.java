package linkedList;
import java.util.Scanner;

public class MergeSortedArray {
	
	public static Node<Integer> takeInput(){
		Scanner sc = new Scanner(System.in);
		int data = sc.nextInt();
		Node<Integer> head = null, tail = null;
		while (data != -1) {
			Node<Integer> newNode = new Node<Integer>(data);
			if (head == null) {
				head = newNode;
				tail = newNode;
			}
			else {
				tail.next = newNode;
			}
			tail = newNode;
			data = sc.nextInt();
		}
		return head;
			
	}
	public static void print(Node<Integer> head) {
		 while (head != null) {
			 System.out.print(head.data + " ");
			 head = head.next;
		 }
		 System.out.println();
	 }
	 
	public static Node<Integer> merge(Node<Integer> head1, Node<Integer> head2){
		
		Node<Integer> head = null, tail = null;
		while (head1 != null && head2 != null) {
			if (head1.data <= head2.data) {
				Node<Integer> newNode = new Node<Integer>(head1.data);
				head1 = head1.next;
				if (head == null) {
					head = newNode;
					tail = newNode;
				}
				else
					tail.next = newNode;
				tail = newNode;	
			}
			else {
				Node<Integer> newNode = new Node<Integer>(head2.data);
				head2 = head2.next;
				if (head == null) {
					head = newNode;
					tail = newNode;
				}
				else
					tail.next = newNode;
				tail = newNode;
			}	
		}
		while (head1 != null) {
			Node<Integer> newNode = new Node<Integer>(head1.data);
			head1 = head1.next;
			if (head == null) {
				head = newNode;
				tail = newNode;
			}
			else
				tail.next = newNode;
			tail = newNode;
		}	
			
				
		while (head2 != null) {
			Node<Integer> newNode = new Node<Integer>(head2.data);
			head2 = head2.next;
			if (head == null) {
				head = newNode;
				tail = newNode;
			}
			else
				tail.next = newNode;
			tail = newNode;
			
		}
		return head;
	}

	public static void main(String[] args) {
		Node<Integer> head1 = takeInput();
		Node<Integer> head2 = takeInput();
		print(head1);
		print(head2);
		Node<Integer> head = merge(head1, head2);
		print(head);
	}

}
