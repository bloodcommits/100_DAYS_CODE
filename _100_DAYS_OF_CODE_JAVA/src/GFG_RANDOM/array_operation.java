package GFG_RANDOM;

import java.util.Arrays;

public class array_operation {
    static int ans (int n, int[] arr) {
        int[] copy = Arrays.copyOfRange(arr, 0, n);
        Arrays.sort(copy);
        if(copy[0]==copy[n-1]){
            return 0;
        }
        if(copy[0]!=0){
            return -1;
        }
        int count = 0;
        int start = -1 ;
        int end = -1;
        for(int i = 0 ; i<n ; i++){

            System.out.println("loop "+i  +" start with val "+arr[i]);

            if(arr[i]!=0){
                if(start==-1){
                    start = i;
                    System.out.println("i am the start "+start);
                }
            }
            else if (i==n-1) {
                if(start!=-1){
                    end = n-1;
                    System.out.println("i am the end "+end);
                }
            }
            else if(arr[i]==0 ){
                if(start!=-1){
                    end = i-1;
                    System.out.println("i am the end "+end);

                }

            }
            if(start!=-1 && end !=-1 && end-start>=-2){
                count++;
                int lol = end-start;
                start = -1 ;
                 end = -1;

                System.out.println("i am the answer of problem "+ lol);
                System.out.println("count increment" + count);

            }
            System.out.println("loop end -------------------");
        }

        return  count ;
    }

    public static void main(String[] args) {
        int n = 10;
        int[] arr = {1,2,0,0,1,2,3,0,1,2} ;
        System.out.println(ans(n , arr));

    }
}
