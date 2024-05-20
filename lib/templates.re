open Tyxml;

let layout = children => {
  <html lang="en">
    <head>
      <meta charset="UTF-8" />
      <meta name="viewport" content="width=device-width, initial-scale=1.0" />
      <title> "dodilanne.dev" </title>
      <link rel="stylesheet" href="public/style.css" />
    </head>
    <body> ...children </body>
  </html>;
};

let home = () => {
  layout([
    <main>
      <h1>
        <span> "welcome to my web" </span>
        <button onclick="document.body.classList.add('sit')"> "sit" </button>
        <span> "e" </span>
      </h1>
      <div className="window">
        <img
          onload="document.body.classList.add('loaded')"
          src="/public/spritesheet.png"
          alt="lilipa"
        />
      </div>
    </main>,
  ]);
};
