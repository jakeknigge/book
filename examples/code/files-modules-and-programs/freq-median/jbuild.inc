(jbuild_version 1)

(alias ((name sexp) (deps (use_median_1.ml.sexp))))

(rule (
  (targets (use_median_1.ml.sexp))
  (deps    (use_median_1.ml))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (counter.mli.sexp))))

(rule (
  (targets (counter.mli.sexp))
  (deps    (counter.mli))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (jbuild.sexp))))

(rule (
  (targets (jbuild.sexp))
  (deps    (jbuild))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (counter.ml.sexp))))

(rule (
  (targets (counter.ml.sexp))
  (deps    (counter.ml))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (build.sh.sexp))))

(rule (
  (targets (build.sh.sexp))
  (deps    (build.sh))
  (fallback)
  (action (
    progn
    (bash "touch jbuild.inc")
    (with-stdout-to ${@} (run rwo-build eval ${<}))))))

(alias ((name sexp) (deps (freq.ml.sexp))))

(rule (
  (targets (freq.ml.sexp))
  (deps    (freq.ml))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (use_median_2.ml.sexp))))

(rule (
  (targets (use_median_2.ml.sexp))
  (deps    (use_median_2.ml))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))
