// function myfunction() {
//     let num1 = parseInt(prompt("Enter first number"));
//     let exp = prompt("Enter the expression");
//     let num2 = parseInt(prompt("Enter second number"));
//     let result;
//     switch(exp)
//     {
//           case "+":
//             result = num1 + num2;
//             break;
//           case "-":
//             result = num1 - num2;
//             break;
//           case "*":
//             result = num1 * num2;
//             break;
//           case "/":
//             result = num1 / num2;
//             break;
//           default:
//             result = "Invalid expression";
//             break;
//         }
//         alert(result);
// }

// myfunction();

// function parameter(x, y) {
//   alert(x+y)
// }
// let x = parseInt(prompt("Enter first number"));
// let y = parseInt(prompt("Enter second number"));
// parameter(x, y);

function noParameter() {
  console.log("No parameter");
}
noParameter();

function noParaReturn() {
  return "No parameter but Return";
}

console.log(noParaReturn());

function parameterReturn(x, y) {
  return x + y;
}
