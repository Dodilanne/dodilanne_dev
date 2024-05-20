Dream.run @@
Dream.logger @@
Dream.router([
  Dream.get("/public/**") @@ Dream.static("public"),
  Dream.get("/", _ => {
    Dream.html @@
    Lib.Utils.html_to_string @@
    Lib.Templates.layout(~body_class=[]) @@
    [Lib.Templates.home()]
  }),
  Dream.get("/sit", _ => {
    Dream.html @@
    Lib.Utils.html_to_string @@
    Lib.Templates.layout(~body_class=["sit", "loaded"]) @@
    [Lib.Templates.home()]
  }),
]);
