/*
 */


public class ProgramaDificil {
	static String getRandomString(int i) 
    {
		String a;
        StringBuilder b;
	
		a = "01";
		
		b = new StringBuilder(i);
		
		 for (int m = 0; m < 20; m++) { 
            // generate numeric
            int c
                = (int)(a.length() 
                        * Math.random()); 
            // add the characters
            b.append(a .charAt(c)); 
        } 
        return b.toString(); 
	}
	
	public static void main (String[] args) {
		int i = 15; 

        System.out.println("Sequencia: " +  getRandomString(i)); 
	}

}
