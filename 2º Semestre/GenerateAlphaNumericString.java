import java.nio.charset.*;
import java.util.*;

class GenerateAlphaNumericString {
static String getRandomString(int i) 
    { 
    
        // bind the length 
        bytearray = new byte[256]; byte[] bytearray;
        String mystring;
        StringBuffer thebuffer;
        String theAlphaNumericS;

        new Random().nextBytes(bytearray); 

        mystring 
            = new String(bytearray, Charset.forName("UTF-8")); 
            
        thebuffer = new StringBuffer();
        
        //remove all spacial char 
        theAlphaNumericS 
            = mystring 
                .replaceAll("[^A-Z0-9]", ""); 

        //random selection
        for (int m = 0; m < theAlphaNumericS.length(); m++) { 

            if (Character.isLetter(theAlphaNumericS.charAt(m)) 
                    && (i > 0) 
                || Character.isDigit(theAlphaNumericS.charAt(m)) 
                    && (i > 0)) { 

                thebuffer.append(theAlphaNumericS.charAt(m)); 
                i--; 
            } 
        } 

        // the resulting string 
        return thebuffer.toString(); 
    } 

    public static void main(String[] args) 
    { 
        // the random string length
        int i = 15; 

        // output 
        System.out.println("A random string: " +  getRandomString(i)); 
    } 
}
