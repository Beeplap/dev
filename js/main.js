async function rnad() {
    try {
        let img=document.getElementById("random-image").innerHTML;
        let getData= await fetch("https://meme-api.com/gimme")
    const data=await getData.json();
    console.log(data);
img.src=data.url

    } catch (error) {
        console.log(error)
    }
    document.createAttribute("click")
}

