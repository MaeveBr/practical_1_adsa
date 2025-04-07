const express = require('express');
const app = express();
const port = 3000;

// Serve static files (e.g., HTML)
app.use(express.static(__dirname));

app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});


let lastVisitTimestamp = null;

app.get('/last.txt', (req, res) => {
  const responseText = lastVisitTimestamp || ''; 
  lastVisitTimestamp = new Date().toISOString(); 
  
  res.type('text').send(responseText); // Send as plain text
});

app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});
