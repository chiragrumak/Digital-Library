import java.util.*;

public class Name2{

  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the string: ");
    String input = sc.next();
    String temp = input;
    
    for(int i = 0; i < input.length(); i++){
      int c = input.charAt(i);
      
      for(int j = i+1; j < input.length(); j++){
        if(c==input.charAt(j)){
          temp = input.substring(0,j) + input.substring(j+1);
        }
        input = temp;
       }
       System.out.println(input);
     }
    System.out.println(input);
    sc.close();
 }

}
