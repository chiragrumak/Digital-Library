public class HelloWorld{

     public static void main(String []args){
        int N  =10,M=10;
        int arr[][] = 
        
        {{80,10,22,44,56,13,11,32,41,112},
         {80,10,22,44,56,13,11,32,41,112},
         {80,10,22,44,56,13,11,32,41,112},
         {80,10,22,44,56,13,11,32,41,112},
         {80,10,22,44,56,13,11,32,41,112},
         {80,10,22,44,56,13,11,32,41,112},
         {80,10,22,44,56,13,11,32,41,112},
         {80,10,22,44,56,13,11,32,41,112},
         {80,10,22,44,56,13,11,32,0,112},
         {80,10,22,44,56,13,11,32,41,0}
        };
 
        System.out.println("\n\n");
        deleteZeroes(arr);
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++)
                System.out.printf("%4d",arr[i][j]);
            System.out.println();
        }    
        
     }
     
    public static void deleteZeroes(int[][] matrix) {
        
        int row[] = new int[matrix.length];
        int column[] = new int [matrix[0].length];
        
        for(int i = 0; i < matrix.length; i++){
            for(int j = 0; j < matrix[i].length; j++){
                if(matrix[i][j] ==0){
                    row[i] = 1;
                    column[j] =1;
                }
                
            }
        }
        
        for(int i = 0; i < matrix.length; i++)
            for(int j = 0; j < matrix[i].length; j++)
                if(row[i] ==1  || column[j]==1)
                    matrix[i][j] = 0;
                    
    }
}
