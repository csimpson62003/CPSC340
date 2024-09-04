public class TinyCode2 {
   /** A twin is when a number is identical to the next number in the list
    * Recursively count the number of twins in the list */
   public int countTwins( int [] list, int index ) {
      
	   if(index == list.length-1) {
		   return 0;
	   }
	   else {
		   if(list[index] == list[index+1]) {
			   return 1 + countTwins(list, index+1);
		   }else {
			   return countTwins(list, index+1);
		   }
	   }

   }


    public static void main(String [] args) {
        TinyCode2 tc = new TinyCode2();
        int [] list ={1,2,2,3,3};
        int result = tc.countTwins( list,0);
        System.out.println("Expected 2 twins, got " + result);

        int [] list2 ={1,2,2,2,2};
        result = tc.countTwins( list2, 0);
        System.out.println("Expected 3 twins, got " + result);

    }

}