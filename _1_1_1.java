public class HelloWorld{

     public static void main(String []args){
        if(HelloWorld.checker(args[0]))
            System.out.println("Contains unique characters.");
        else
            System.out.println("Do not Contain unique characters.");
        
     }
     static boolean checker(String input){
        boolean checker = true;
        int store = 0;
        
        for(int i = 0; i < input.length(); i++ ){
            
            if ((store & (1 << (input.charAt(i)-97))) > 0){
                System.out.println(store);
                return false;    
            }
            else
                store |= (1 << (input.charAt(i)-97));
        }
        return checker;
         
     }
}
