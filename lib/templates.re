open Tyxml;

let layout = (~body_class, children) => {
  let nos =
    Html.Unsafe.data(
      "<noscript> <link rel=\"stylesheet\" href=\"public/noscript.css\" /> </noscript>",
    );
  <html lang="en">
    <head>
      <meta charset="UTF-8" />
      <meta name="viewport" content="width=device-width, initial-scale=1.0" />
      <title> "dodilanne.dev" </title>
      <link rel="stylesheet" href="public/style.css" />
      nos
    </head>
    <body className=body_class> ...children </body>
  </html>;
};

let home = () => {
  <main>
    <h1>
      <span> "welcome to my web" </span>
      <a
        className="button"
        href="/sit"
        onclick="event.preventDefault(); document.body.classList.add('sit')">
        "sit"
      </a>
      <span> "e" </span>
    </h1>
    <div className="window">
      <img
        onload="document.body.classList.add('loaded')"
        src="/public/spritesheet.png"
        alt="lilipa"
      />
    </div>
  </main>;
};
