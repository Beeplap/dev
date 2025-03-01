// let i = 2;
// do {
//     console.log("The number is less than 5");
//     i++;

// } while (i<5);

function oddoreven(a) {
  if (a == "" || isNaN(a) || a < 0) {
    alert("Input must be integer");
  } else if (a % 2 === 0) {
    alert(a + " is an even number");
  } else {
    alert(a + " is an odd number");
  }
}

let x = parseInt(prompt("Enter the number to check: "));
oddoreven(x);
