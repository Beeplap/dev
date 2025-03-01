// let array = ["Butwal ", "campus ", "rupandehi ", "kalika "];

// //toString
// console.log(
//   "%cThis is toString: ",
//   "font-weight: bold; color: red; font-size:15px"
// );

// let tostring = array.toString();
// console.log(tostring);

// //valueOf
// console.log(
//   "%cThis is valueOf: ",
//   "font-weight: bold; color: red; font-size:15px"
// );

// let valueof = array.valueOf();
// console.log(valueof);

// //unshift
// console.log(
//   " %cThis is unshift: ",
//   "font-weight: bold; color: red; font-size:15px"
// );

// let unshift = array.unshift("New");
// console.log(array);

// //length
// console.log(
//   " %cThis is length: ",
//   "font-weight: bold; color: red; font-size:15px"
// );
// let length = array.length;
// console.log(length);

// //myObject
// console.log(
//   "%cThis is myObject: ",
//   "font-weight: bold; color: red; font-size:15px"
// );

// let myObject = {
//   First_Name: "Adolf",
//   Last_Name: "Hitler",
//   Address: "Butwal",
//   Gender: "Male",
//   Email: "adolfhitler@gmail.com",
//   Phone: "1234567890",
// };

// myObject.Facebook = "https://www.facebook.com/profile.php?id=100069332372121";
// myObject.dob = "2008";
// console.log(myObject);

//alert & confirm
// alert("This is day 4 of training");
// confirm("Are you sure you want to continue training?");
// let check = confirm("Are you sure you want to Delete?");
// if (check) {
//   alert("Deleted!");
//   console.log("Deleted!");
// } else {
//   alert("Cancelled!");
//   console.log("Cancelled!");
// }

//prompt
// let myObject = {
//   First_Name : "Beeplap",
// };
// let Last = prompt("Enter your last name: ");

// myObject.Last_Name = Last;
// let check = confirm("Your name is " + myObject.First_Name + " "+  myObject.Last_Name +  "?");
// if(check)
// console.log(myObject);
// else
//   alert("Name not confirmed!");

//Entering the names and information
// let myObject = {
//     First_Name : "Beeplap",
//   };
//   let Last = prompt("Enter your last name: ");
//   myObject.Last_Name = Last;
//   let Email = prompt("Enter your email: ");
//   myObject.Email = Email;

//   console.log(myObject);

// Option2
let First_Name = prompt("Enter your name: ");
let Last_Name = prompt("Enter your last name: ");
let Email = prompt("Enter your email: ");
let myObject = {
  First_Name,
  Last_Name,
  Email
};
console.log(myObject);
