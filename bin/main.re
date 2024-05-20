Dream.run @@
Dream.logger @@
Dream.router([
  Dream.get("/public/**") @@ Dream.static("public"),
  Dream.get("/", _ => {
    Dream.html @@ Lib.Utils.html_to_string @@ Lib.Templates.home()
  }),
]);
