
const os = require('os');
//consola normal 
console.log("información del usuario: ",os.userInfo());
console.log("Tiempo de pc prendida: ",os.uptime());
console.log("memoria total:",os.totalmem());
console.log("memoria disponible:",os.freemem());

//para mostrar una tabla en consola 
console.table({
    os: os.platform(),
    version : os.release(),
    MemoriaTotal: os.totalmem()
}
)
