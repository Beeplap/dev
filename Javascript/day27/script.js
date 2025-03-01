let date = new Date();
console.log( date );

const interval = setInterval( () =>{
    let date = new Date();
    console.log( date );
    document.write( "" );
    document.write( date );
}, 1000 );

const clear= () =>{
clearInterval( interval );
}
