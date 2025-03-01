// let num1 = parseInt(prompt("Enter first number: "));
// let exp = prompt("Enter the expresion: ");
// let num2 = parseInt(prompt("Enter second number: "));
// let output;

// switch (exp) {
//   case "+":
//     output = num1 + num2;
//     break;
//   case "-":
//     output = num1 - num2;
//     break;
//   case "*":
//     output = num1 * num2;
//     break;
//   case "/":
//     output = num1 / num2;
//     break;
//   default:
//     output = "Invalid expression";
//     break;
// }
// alert(output);

// let num = parseInt(prompt("Enter a number between 1 and 6: "));
// switch (num) {
//   case 1:
//     alert("One");
//     break;
//   case 2:
//     alert("Two");
//     break;
//   case 3:
//     alert("Three");
//     break;
//   case 4:
//     alert("Four");
//     break;
//   case 5:
//     alert("Five");
//     break;
//   case 6:
//     alert("six");
//     break;
//   default:
//     alert("Not a valid number");
// }

// let role = prompt("Enter your role: ");

// switch (role) {
//   case "admin":
//     alert("You have access to all features");
//     break;
//   case "manager":
//     alert("You have access to manage products and orders");
//     break;
//   case "employee":
//     alert("You have access to view products and orders");
//     break;
//   default:
//     alert("Unauthorized !!");
//     break;
// }

let date = new Date().getDate();
let day = new Date().getDay();
switch (day) {
  case 0:
    day = "Sunday";
    break;
  case 1:
    day = "Monday";
    break;
  case 2:
    day = "Tuesday";
    break;
  case 3:
    day = "Wednesday";
    break;
  case 4:
    day = "Thursday";
    break;
  case 5:
    day = "Friday";
    break;
  case 6:
    day = "Saturday";
    break;
}
console.log("Today is " + date + "th of " + day);
