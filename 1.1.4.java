import java.util.*;
import java.util.Arrays;

public class HelloWorld {

	public static void main(String[] args) {

		/*
		 * Scanner sc = new Scanner(System.in);
		 * System.out.println("\n Enter the strings to be tested : "); String
		 * input1 = sc.next(); String input2 = sc.next();
		 */
		// String input1 = "rail safety";
		// String input2 = "fairy tales";

		// String input1 = "restful";
		// String input2 = "fluster";

		String input1 = "funeral";
		String input2 = "realfun";

		// char input11[] = input1.toCharArray();
		// Arrays.sort(input11);
		// char input22[] = input2.toCharArray();
		// Arrays.sort(input22);
		//
		// if(String.valueOf(input11).equals(String.valueOf(input22)))
		// System.out.println("\n It's an Anagram!");
		// else
		// System.out.println("\n It's not an Anagram.");

		if (anagram(input1, input2))
			System.out.println("\n It's an Anagram!");
		else
			System.out.println("\n It's not an Anagram.");

	}

	public static boolean anagram(String s, String t) {

		if (s.length() != t.length())
			return false;

		int unique_characters = 0;
		int num_completed = 0;

		int arr[] = new int[256];

		char temp[] = s.toCharArray();

		for (char c : temp) {

			if (arr[c] < 1)
				unique_characters++;
			arr[c]++;
		}

		for (int i = 0; i < t.length(); i++) {

			char c = t.charAt(i);

			if (arr[c] == 0)
				return false;

			arr[c]--;

			if (arr[c] == 0) {
				num_completed++;

				if (num_completed == unique_characters && (i == t.length() - 1))
					return true;

			}
		}

		return false;

	}
}
