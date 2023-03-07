const http = require('http')
//creamos un servidor 
//reques = resive informacion 
//response = envia informacion 
http.createServer(function(request , response){
    console.log(request)
    response.write('HOLA MUNDO'); // enviamos un mensaje desde el servidor 
    response.end(); //decimos que ya acabado el mensaje 
}).listen(3000)// aca decimos que se deve de mantener ejecutandoce en el puerto 3000
console.log('server ejecutándose en el puerto 3000')