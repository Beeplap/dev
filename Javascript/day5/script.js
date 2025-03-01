// if (input == "") {
//   alert("Age must not be empty");
// } else if (isNaN(input)) {
//   alert("Please enter valid input");
// } else if (input >= 18) {
//   alert("You are eligible for voting");
// } else {
//   alert("You are not eligible for voting");
// }
// input >= 18 ? alert("You can vote") : alert("You cannot vote");
// input3 == '+' ?  output = input + input2 : input3 == '-' ? output = input-input2 : input3 == '*' ? output = input*input2 : input3 == '/' ? output = input/input2

let num1 = parseInt(prompt("Enter first number: "));
let expression = prompt("Enter the operation: ");
let num2 = parseInt(prompt("Enter second number: "));
let output;

// if (isNaN(num1) || isNaN(num2)) {
//   output = "Please enter valid numbers";
// } else if (expression == "+") {
//   output = num1 + num2;
// } else if (expression == "-") {
//   output = num1 - num2;
// } else if (expression == "*") {
//   output = num1 * num2;
// } else if (expression == "/") {
//   if (num2 == 0) {
//     output = "Cannot divide by zero";
//   } else output = num1 / num2;
// } else output = "Invalid";

isNaN(num1) || isNaN(num2) ? output = "Please enter valid numbers" 
: expression == "+" ?  output = num1 + num2 
: expression == "-" ? output = num1 - num2 
: expression == "*" ? num1 * num2 
: expression == "/" ? num2 == "0" ? output = "Cannot divide by zero" 
: output = num1 / num2 
: output = "invalid"

alert(output);
