import java.util.*;


public class HelloWorld{

     public static void main(String []args){
        
        Scanner sc = new Scanner(System.in);
        System.out.println("\n Enter the string to be tested : ");
        
        String input = sc.next();
        
        int i=0,j=input.length()-1, flag=0;

        while (i< j){
        
            if(input.charAt(i++) != input.charAt(j--)){
                System.out.println("\n Not an anagram!");
                flag = 1;
                break;
            }
        }
                
        if(flag==0)
         System.out.println("\n It's an anagram!");    
     }
