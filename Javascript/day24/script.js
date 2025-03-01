
    // let & const can be used outside blocked scope or outside curly braces
    // function myFunction()
    // {
    //     if ( 1 == 1 )
    //     {
    //         // let a = "Hello"
    //         // const a = "Hello"
    //         var a = "Hello"
    //     }

    //     console.log( a )
    // }
    // myFunction()


    // const cannot be reassigned
    // let name = "Kalika"
    // name = "Kalika Campus"
    // console.log( name )

    // console.log( name )

    // var name = "Hello"


    // class Person
    // {
    //     //constructor
    //     constructor( name, age )
    //     {
    //         this.name = name
    //         this.age = age
    //         console.log( age, name )
    //     }

    //     greet = () =>
    //     {
    //         console.log( `Hello this is ${ this.name }, and I am ${ this.age } years old` )
    //     }

    //     displayName = () =>
    //     {
    //         console.log( this.name )
    //     }
    // }

    // const p1 = new Person()
    // p1.greet()

    // const p2 = new Person( "Kalika", 120 )
    // p2.greet()
    // p2.displayName();


    // for each loop
    const array = [ "apple", "banana", "cherry", "date", "elderberry", "fig", {
        name: "Kalika",
        age: 120
    } ]

    array.forEach( ( item, i, arr ) =>
    {
        console.log( item )
        if ( typeof item === "object" )
        {
            console.log( item.name )
            console.log( item.age )
        }
    } )



    // task for day 24
    const array2 = [ { name: "Amrit", age: 20 }, { name: "Anupam", age: 21 }, { name: "Aakash", age: 22 } ]









