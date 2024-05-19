open Tyxml;

let greet = () =>
<html lang="en">
  <head>
    <meta charset="UTF-8"></meta>
    <meta name="viewport" content="width=device-width, initial-scale=1.0"></meta>
    <title> "dodilanne.dev" </title>
    <link rel="stylesheet" href="public/style.css" ></link>
  </head>
  <body>
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
      </main>
    </body>
</html> ;

let html_to_string = html => Format.asprintf("%a", Tyxml.Html.pp(), html);

let () =
  Dream.run @@
  Dream.logger @@
  Dream.router([
    Dream.get("/public/**") @@ Dream.static("public"),
    Dream.get("/", _ => Dream.html(html_to_string(greet()))),
  ]);
