import java.util.*;
import java.util.Arrays;

public class HelloWorld {

	public static void main(String[] args) {

		/*Scanner sc = new Scanner(System.in);
		System.out.println("\n Enter the strings to be tested : ");

		String input1 = sc.next();
		String input2 = sc.next();
        */
        String input1 = "rail safety";
		String input2 = "fairy tales";
		
		char input11[] = input1.toCharArray();
		Arrays.sort(input11);
		char input22[] = input2.toCharArray();
		Arrays.sort(input22);
		
		System.out.println(input11);
		System.out.println(input22);
		
		if(Arrays.deepEquals(input11,input22))
		    System.out.println("\n It's an Anagram!");
		else
		    System.out.println("\n It's not an Anagram.");
	}
}
