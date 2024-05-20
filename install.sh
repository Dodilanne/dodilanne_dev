bash -c "sh <(curl -fsSL https://raw.githubusercontent.com/ocaml/opam/master/shell/install.sh)" -y
opam init -y
eval $(opam env)
opam switch . -y
