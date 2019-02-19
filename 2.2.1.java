import java.util.Hashtable;

public class LinkedList {

	public static void main(String[] args) {
		int arr[] = { 10, 9, 8, 7, 7, 7, 4, 4, 3, 3, 0 };

		Node head = new Node(11);

		for (int i = 0; i < arr.length; i++) {
			head.appendToTail(arr[i]);
		}
//		deleteDups(head);
		deleteDups2(head);
		print(head);

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
