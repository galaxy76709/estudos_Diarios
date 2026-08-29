//dependencias 
import java.util.Scanner;

public class invertRec
{
    /*
       funcao para verirficar quando a palavra FIM for escrita
     */
    public static boolean theEnd ( String str )
    {
        if ( str == null )
        {
            return false;
        }

        int size = str.length();

        if ( size >= 3 &&
             str.charAt(0) == 'F' &&
             str.charAt(1) == 'I' &&
             str.charAt(2) == 'M' )
        {
            return true;
        }

        return false;
    }

    /*
       funcao destinada para inversao recursiva de string,
       a partir da ultima posicao ate a primeira.
     */
    public static String invertStringRec ( String str, int index )
    {
        if ( index < 0 )
        {
            return "";
        }

        return str.charAt(index) + invertStringRec(str, index - 1);
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextLine())
        {
            String str = sc.nextLine();

            if ( theEnd(str) )
            {
                break;
            }

            System.out.println(str);
            System.out.println(invertStringRec(str, str.length() - 1));
        }

        sc.close();
    }
}
