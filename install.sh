apk add --no-cache pacman
pacman -S opam
opam init -y
eval $(opam env)
opam switch . -y
