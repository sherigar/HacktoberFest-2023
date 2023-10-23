//wrapper class program

import java.util.*;
public class wrapper {
   public static void main(String[]args)
  {
    wrapper x = new wrapper();
    wrapper b = new wrapper();
    x = null;
    b = null;
    new wrapper();
    System.gc();
  }
  public void finalize()
  {
    System.out.print("this is GC ");

  }
}
