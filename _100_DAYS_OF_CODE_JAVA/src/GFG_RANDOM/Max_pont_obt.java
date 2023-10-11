package GFG_RANDOM;

// THIS IS THE SOLUTION FOR TAKING THE MAX ELEMENTS FROM THE LEFT AND RIGHT

//BOT A LEET CODE QUETION BUT MY OWN

public class Max_pont_obt {
   static int sol(int[] arr, int k) {
        int start  = 0 ;
        int end = arr.length-1;
        int take = 0;
int count1 = 0;
        while(start!=k && end!=0 &&  count1<arr.length-1){
            count1++;
            System.out.println("running the outer while loop " + count1);
            System.out.println("start " + start +" "+ " end " + end + " bigger for loop");
            if(arr[start]>arr[end]){

                take = take + arr[start];
                start ++;

            System.out.println("FRONT BIG "  +take);
            }
            else if(arr[end]>arr[start]){
                take = take + arr[end];
                end--;
                System.out.println("END BIG TAKE "  +take);

            }
            else if(arr[start]==arr[end]){
                int flag = 0;
                while(arr[start]==arr[end] && start<end){

                    flag++;
                    System.out.println("running the inner for loop " + flag);
                    System.out.println("start " + start +" "+ " end " + end + " snaller while loop");

                    take = take+arr[start];
                    System.out.println("inner while take " + take);
                    start++;
                    end--;
                    if(count1==k){return take;}
                    count1++;


                }
                System.out.println("count" + count1 +" and k "+k );

                System.out.println("inner while ke baad TAKE " + take+" aur start "+start+" end " +end);
                if(arr[start]<arr[end]){
                    start = start - flag;
                    take = take + arr[end];
                    System.out.println("take inside small if "  +take);
                    end--;

                }
                else{
                    take = take + arr[start];
                    System.out.println("take inside small else " + take);
                    end = end +flag;

                    start ++;
                }
                System.out.println(" BADE while ke baad take "+take);
            }
            System.out.println("I AM LOOP END TAKE "+ take);
            if(count1==k){
                System.out.println(" I AM COUNT " + count1);
                return take;
            }
        }

        return take;

    }

    public static void main(String[]args){
        int []arr = {11,49,100,20,86,29,72};
        int k = 4;
        System.out.println(sol(arr , k));

    }
}
