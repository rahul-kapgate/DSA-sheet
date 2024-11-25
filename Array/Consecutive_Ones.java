/**
 * Consecutive_Ones
 */
public class Consecutive_Ones {

    static void findConsecutiveOnes(int[] arr){

        int strick = 0;
        int maxStrick = 0;
        
        for(int i=0; i<arr.length; i++){
            if(arr[i] == 1){
                strick++;

                if(maxStrick <= strick){
                  maxStrick = strick;

                }
            } 
            else{
                strick = 0;
            }
        }
        System.out.println(maxStrick);
    }

    public static void main(String[] args) {
        
        int[] arr = {1,0,1,1,0,1,1,1,0};

        findConsecutiveOnes(arr);
    }
}