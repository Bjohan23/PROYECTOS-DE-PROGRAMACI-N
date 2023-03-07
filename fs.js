const fs = require('fs')
//para leer archivos 
const first = fs.readFileSync('./data/first.txt', 'utf-8')

console.log(first.toString())

//crear un nuevo archivo
const second = fs.writeFileSync('./data/second2.txt', 'este es un tercer archivo')

//añadir nuevo contenido a un archivo existente 
const añadir= fs.writeFileSync('./data/second2.txt', 'este es un tercer archivo',{
    flag: 'a'
})