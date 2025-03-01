function handleSubmit() {
  let name = document.getElementById("name").value;
  let address = document.getElementById("address").value;
  let email = document.getElementById("email").value;

  let nameE = document.getElementById("nameError");
  let addressE = document.getElementById("addressError");
  let emailE = document.getElementById("emailError");

  let password = document.getElementById("password").value;
  let confirm = document.getElementById("confirm").value;
  let pass = document.getElementById("pass");

  nameE.innerHTML = "";
  addressE.innerHTML = "";
  emailE.innerHTML = "";

  pass.innerHTML = "";

  let isValid = true;

  if ( name.length < 4 ) {
    nameE.innerHTML = "Name must be at least 4 characters";
    isValid = false;
  }
  if (name == "") {
    nameE.innerHTML = "Name can't be empty";
    isValid = false;
  }
  if (address == "" ) {
    addressE.innerHTML = "Address is required";
    isValid = false;
  }
  if (email == "" ) {
    emailE.innerHTML = "Email is required";
    isValid = false;
  }
  if (password == "" || password.length <=8) {
    passerror.innerHTML = "Password must me atleast 8 characters";
    isValid = false;
  }

  if (password != confirm) {
    pass.innerHTML = "Passwords do not match";
    isValid = false;
  }

  return isValid;
}
