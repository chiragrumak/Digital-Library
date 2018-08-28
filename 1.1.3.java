
import java.util.*;

public class HelloWorld {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the String: ");
		String input = sc.nextLine();
		//
		// if (input.isEmpty())
		// System.out.println("The string is empty.");
		//
		// for (int i = 0; i < input.length(); i++) {
		// char c = input.charAt(i);
		//
		// for (int j = i + 1; j < input.length(); j++) {
		//
		// if (c == input.charAt(j)) {
		// input = input.substring(0, j) + input.substring(j + 1);
		// j--;
		// }
		// }
		// }
		// System.out.println(input);

		removeDuplicates(input.toCharArray());

		sc.close();

	}

	public static void removeDuplicates(char[] str) {

		if (str == null)
			return;

		int len = str.length;

		if (len < 2)
			return;

		int tail = 1;

		for (int i = 1; i < len; ++i) {

			int j;
			//System.out.println(str);
			for (j = 0; j < tail; ++j) {

				if (str[i] == str[j])
					break;

			}

			if (j == tail) {

				str[tail] = str[i];

				++tail;

			}
			String temp = String.valueOf(str);
			System.out.println(temp);
		}

		str[tail] = 0;

		System.out.println(str);
	}

}
