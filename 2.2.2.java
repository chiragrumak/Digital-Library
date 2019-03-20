package org.ctci.code;

import java.util.Hashtable;

public class LinkedList {

	public static void main(String[] args) {
		int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

		Node head = new Node(11);

		for (int i = 0; i < arr.length; i++) {
			head.appendToTail(arr[i]);
		}
//		deleteDups(head);
//		deleteDups2(head);
//		print(head);
		nthFromLast2(head,5);

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
			System.out.println(head.data);
			head = head.next;
		}
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
