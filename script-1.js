// index.js

// WebAssembly file ko fetch karte hain
fetch('mycode.wasm')
    .then(response => response.arrayBuffer())  // Convert to ArrayBuffer
    .then(bytes => WebAssembly.instantiate(bytes))  // WebAssembly ko instantiate karte hain
    .then(results => {
        console.log('WebAssembly Loaded');
        // Agar WebAssembly mein functions hain, toh unhe call kar sakte hain
    })
    .catch(e => console.error("Error loading WebAssembly", e));  // Error handling