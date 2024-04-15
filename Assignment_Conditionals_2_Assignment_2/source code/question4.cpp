//when you use the ternary operator ?:, it checks the types of the expressions 
//involved. In the case of test ? 3 : '1', 3 is an int and '1' is a char. 
//Since char can be converted to int, C++ automatically converts '1' to its 
//ASCII value, which is 49. So, when test is 0, the expression 
//evaluates to 49 because '1' gets promoted to its integer ASCII value.
// so the output of the code is:
//First character 1
//Second character 49