class tester { public static void main(string args (1) { try { int c[] = { 1 }; system.out.println( c.length); c[1] = 142; system.out.println("c=" + [1] ); int a = args.length; system.out.println("a = " + a); int b = 8/a; } catch (arithmeticexception e) { system.out.println("divide by 0: "+e); } catch(arrayindexoutofbounds exception e) { system.out.println("array index oob:" + e); } system.out.println("after try/catch blocks."); } }