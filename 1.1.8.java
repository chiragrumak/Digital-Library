public class HelloWorld{

     public static void main(String []args){
        
        String input1 = "waterbottle";
        String input2 = "erbottlewat";
        String sample = "waterbottlewaterbottle";
        
        
        if(input1.length()== input2.length()){
            if(sample.indexOf(input2)==-1)
                System.out.println("The string cannot be obtained through rotation.");
            else
                System.out.println("The string is present at the index = "+sample.indexOf(input2));
        }
        else
            System.out.println("The string cannot be obtained through rotation.");
            
        
     }
}
