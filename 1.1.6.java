public class HelloWorld{

     public static void main(String []args){
        int N  =10;
        int arr[][] = 
        
        {{0,10,0,0,0,0,55,0,0,0},
         {0,0,50,0,0,0,0,0,23,0},
         {0,0,0,60,0,0,23,0,0,32},
         {1,0,0,0,70,0,0,0,0,18},
         {0,8,88,0,0,80,0,0,0,23},
         {0,7,0,0,23,0,90,0,0,24},
         {0,28,0,0,28,0,0,50,0,25},
         {0,0,6,29,0,0,0,0,30,26},
         {0,0,0,0,0,5,0,0,0,20},
         {0,0,0,0,0,56,0,10,0,10}
        };
        // System.out.print({)
        
          for(int i = 0; i < N; i++){
            System.out.print("{");
            for(int j = 0; j < N; j++)
                System.out.print(arr[i][j]+",");
            System.out.println("},"); 
          }
        
        
        System.out.println("\n\n");
        rotate(arr,N);
        
        for(int i = 0; i < N; i++){
            System.out.print("{");
            for(int j = 0; j < N; j++)
                System.out.print(arr[i][j]+",");
            System.out.println("},");    
     }    
        
     }
     
public static void rotate(int[][] matrix, int n) {
 for (int layer = 0; layer < n / 2; ++layer) {
    int first = layer;
    int last = n - 1 - layer;
    for(int i = first; i < last; ++i) {
        int offset = i - first;
        int top = matrix[first][i]; // save top
        // left -> top
        matrix[first][i] = matrix[last-offset][first];
        
        // bottom -> left
        matrix[last-offset][first] = matrix[last][last - offset];

        // right -> bottom
        matrix[last][last - offset] = matrix[i][last];

        // top -> right
        matrix[i][last] = top; // right <- saved top
    }
}
 }
}
