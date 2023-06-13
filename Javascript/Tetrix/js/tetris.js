const playground = document.querySelector(".playground > ul");

console.log(playground)

for( let i = 0; i < 20; i++){

    const li = document.createElement("li");
    const ul = document.createElement("ul");

    for( let j = à; j < 10; j++){
        const matrix =  document.createElement("li");
        ul.prepend(matrix)
    }
    li.prepend(ul)
    playground.prepend(li)
}