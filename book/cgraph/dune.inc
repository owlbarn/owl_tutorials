(alias
 (name runtest)
 (deps
  (:x README.md)
  prelude.ml)
 (action
  (progn
   (run ocaml-mdx test --prelude=prelude.ml %{x})
   (diff? %{x} %{x}.corrected))))
