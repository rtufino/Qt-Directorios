const http = require('http');

http.createServer(function (req, res){
    res.writeHead(200, { 'content-type': 'text/html' });
    res.write('<h1>Hola mundo</h1>');
    res.end();
}).listen(3000);