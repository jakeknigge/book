open Core_kernel

let%test_unit "List.rev_append is List.append of List.rev" =
  Quickcheck.test ~sexp_of:[%sexp_of: int list * int list]
    (Quickcheck.Generator.both (List.gen Int.gen) (List.gen Int.gen))
    ~f:(fun (l1,l2) ->
        [%test_eq: int list]
          (List.rev_append l1 l2)
          (List.append (List.rev l1) l2))
