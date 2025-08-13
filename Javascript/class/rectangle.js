// //wap to to display area of rectangle & circle using switch case statenent if you write 1 it display recrangle 2 prints circle

// var display = prompt("Press 1 for rectangle & 2 for circle");

// switch (display) {
//   case "1":
//     var length = parseInt(prompt("Enter length of rectangle:"));
//     var width = parseInt(prompt("Enter width of rectangle:"));
//     var areaRectangle = length * width;
//     alert("Area of rectangle: " + areaRectangle);
//     document.writeln("Area of rectangle: " + areaRectangle)
//     break;
//   case "2":
//     var radius = parseInt(prompt("Enter radius of circle:"));
//     var areaCircle = 3.1415 * radius * radius;
//     alert("Area of circle: " + areaCircle);
//     document.writeln("Area of circle: " + areaCircle);
//     break;
//   default:
//     alert("Please enter 1 or 2.");
// }

// write a js progrma to print sum of odd numbers from 1 to 100

// sum = 0;
// for (let i = 0; i <= 100; i++) {
//   if (i%2!=0){
//     sum += i;

//   }
  
// }
// document.writeln(sum);


// 
sum = 0;
for (let i = 5; i >= 1; i--) {
  for (let j = 5; j>= i; --j) {
    document.writeln("*")
    
  }
  document.writeln("<br>")
  
}
  