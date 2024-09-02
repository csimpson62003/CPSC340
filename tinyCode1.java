
public class tinyCode1 {

		   /** Implement a formula to calculate the natural log of a value
		    * x RECURSIVELY. x assumed to be at least 1.
		    * n represents the depth of recursion (higher n gives a more accurate answer)
		    * ln x = (x-1)/x + 1/2 ((x-1)/x)^2 + 1/3 ((x-1)/x)^3 + .. + 1/n ((x-1)/x)^n  */
		    public double ln(double x, int n) {
		    	 if (n == 1) {
		             return (x-1) / x;
		         }
		         double thisRecursionRun = Math.pow((x-1) / x, n) / n;
		         return thisRecursionRun + ln(x, n - 1);
		     
		    }

		    public static void main( String [] args ) {
		    	tinyCode1 tc = new tinyCode1();
		        double result = tc.ln(4, 20);
		        System.out.println("Expected around 1.386, got " + result);

		    }
		}
