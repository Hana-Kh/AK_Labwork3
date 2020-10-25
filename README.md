# AK_Labwork3

Current console program takes arguments such as:
  * --help or -h;
  * --version or -v;
  * --list or -l with list of additional arguments;
  * --Value or -V with value after;
  
Examples:
 
 1.
 * in   - ./Lab3 --list=1,2,3
 * out  - list = 1,2,3
 
 2.
 * in   - ./Lab3 -V100
 * out  - Value = 100
 
 3.
 * in   - ./Lab3 --version -vh
 * out  - Current version is 1.0.0
        Help. Try -h or --help.
 
 4.
 * in   - ./Lab3 --version --help -v -l22,33
 * out  - Current version is 1.0.0
        Help. Try -h or --help.
        list = 22,33
        
