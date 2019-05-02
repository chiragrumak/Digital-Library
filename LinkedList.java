package org.ctci.code;

import java.util.Hashtable;

public class LinkedList {

	public static void main(String[] args) {
		int arr1[] = { 1, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
		int arr2[] = { 1, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

		Node head1 = new Node(3);
		Node head2 = new Node(4);

		Node temp = null;
		
		for (int i = 0; i < arr1.length; i++) 
			head1.appendToTail(arr1[i]);
		for (int i = 0; i < arr1.length; i++) 
			head1.appendToTail(arr1[i]);
		
		sumLinkedList(head1,head2);
		print(head1);
		print(head2);
		

		
//		
//		int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//
//		Node head = new Node(11);
//		Node temp = null;
//		
//		for (int i = 0; i < arr.length; i++) {
//			if (i==4)
//				temp = head.appendToTail(arr[i]);
//			else
//				head.appendToTail(arr[i]);
//		}
//		deleteDups(head);
//		deleteDups2(head);
//		print(head);
////		nthFromLast2(head,5);
//		deleteMiddleNode(head,temp);
//		print(head);

	}
	
	private static void sumLinkedList(Node head1, Node head2) {

		Node temp1=head1, temp2=head2;
		Node result = new Node();
		
		while(temp1.next != null && temp2.next != null) {
			
			result.data = temp1.data + temp2.data;
			
			
		}
		
		
	}

	private static void deleteMiddleNode(Node head, Node temp) {
		if(head == null || temp.next == null)
			return;
		
		temp.data = temp.next.data;
		temp.next = temp.next.next;
		return;
	}

	public static void nthFromLast2(Node head, int n) {
		if (head == null || n < 1)
			return;

		Node p1 = head;
		Node p2 = head;
		
		for (int i = 0; i < n-1; i++) 
			p2 = p2.next;
		

		while(p2.next!=null) {
			p1 = p1.next;
			p2 = p2.next;
		}
		
		System.out.println("The nth element from last = "+p1.data);
	}
	
	public static void nthFromLast(Node head, int n) {
		if (head == null)
			return;

		Node previous = head;
		int last = 0;

		while (previous != null) {
			last++;
			previous = previous.next;
		}	
		
		previous = head;
		
		for (int i = 0; i < last-n; i++) {
			previous = previous.next;
		}
		System.out.println("The nth element from last = "+previous.data);
	}

	public static void print(Node head) {
		while (head != null) {
			System.out.print(head.data +" ");
			head = head.next;
		}
		System.out.println();
	}

	public static void deleteDups(Node head) {
		Hashtable table = new Hashtable();
		Node previous = null;
		while (head != null) {
			if (table.containsKey(head.data))
				previous.next = head.next;
			else {
				table.put(head.data, true);
				previous = head;
			}
			head = head.next;
		}
	}

	public static void deleteDups2(Node head) {
		if (head == null)
			return;
		Node previous = head;
		Node current = previous.next;

		while (current != null) {
			Node runner = head;
			while (runner != current) {
				if (runner.data == current.data) {
					Node tmp = current.next;
					previous.next = tmp;
					current = tmp;
					break;
				}
				runner = runner.next;
			}

			if (runner == current) {
				previous = current;
				current = current.next;
			}

		}

	}

}
