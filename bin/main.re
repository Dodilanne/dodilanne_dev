open Tyxml;

let greet = () =>
  <html>
    <head>
      <title> "dodilanne.dev" </title>
      <link rel="stylesheet" href="public/style.css" />
    </head>
    <body>
      <h1>
        "Welcome to my web"
        <button onclick="console.log('click!')"> "site" </button>
      </h1>
      <div className="window">
        <img src="/public/spritesheetv2.png" alt="lilipa" />
      </div>
    </body>
  </html>;

let html_to_string = html => Format.asprintf("%a", Tyxml.Html.pp(), html);

let () =
  Dream.run @@
  Dream.logger @@
  Dream.router([
    Dream.get("/public/**") @@ Dream.static("public"),
    Dream.get("/", _ => Dream.html(html_to_string(greet()))),
  ]);
