package Array_Questions.set_matrix_zero;

import java.util.Arrays;
import java.util.HashSet;




public class Set_matrix_zero {

    static void ans(int[][]arr){
        HashSet<Integer> rowhash  = new HashSet<>();
        HashSet<Integer> colhash  = new HashSet<>();

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j <arr[i].length ; j++) {
                if(arr[i][j]==0){
//                    System.out.println(i+" "+j);
                    rowhash.add(i);
                    colhash.add(j);
                    continue;
                }
            }
        }
        System.out.println(rowhash);
        System.out.println(colhash);

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j <arr[i].length ; j++) {
                if(rowhash.contains(i) || colhash.contains(j)){
                    arr[i][j]=0;
                }
            }
        }


    }
    public static void main(String[] args){
        int [][] arr = {
                 {0,1,2,0}
                ,{3,4,5,2}
                ,{1,3,1,5}
        };


        System.out.println(Arrays.deepToString(arr));

        ans(arr);

        System.out.println(Arrays.deepToString(arr));
    }

}
