function change() {
  let color = document.getElementById("container");

  color.style.backgroundColor == "red"
    ? (color.style.backgroundColor = "blue")
    : (color.style.backgroundColor = "red");
}

function dark() {
  let body = document.body;
  let btn = document.getElementById("btn");

  body.style.backgroundColor == ""
    ? (body.style.backgroundColor = "black")
    : (body.style.backgroundColor = "");


    if(btn.style.backgroundColor == ""){
      btn.style.backgroundColor = "#585858";
      
        btn.style.color = "white"; 

    }

    else {
      btn.style.backgroundColor = ""
       btn.style.color = "";
    }
}
