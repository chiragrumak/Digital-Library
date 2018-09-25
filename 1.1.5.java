

public class HelloWorld{

     public static void main(String []args){
        
        String st = "Hello World  how are you doing";
        // String temp = st.replace(" ","%20");
        // System.out.println(temp);
        char array []  = st.toCharArray();
        char temp [] = new char[100];
        int j = 0;
        for(int i = 0; i < array.length; i++){
            if(array[i]==32){
                temp[j++] = '%';
                temp[j++] = '2';
                temp[j++] = '0';
            }
            else
                temp[j++] = array[i];
        }
        
        System.out.println(temp);
               
     }
}
