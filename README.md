> 1 dependency: [tree-sitter](https://tree-sitter.github.io/tree-sitter/)

# Who's Elsa?

[Elsa](https://github.com/ucsd-progsys/elsa) is a tiny language deployed in educational/academic settings. The language aims to capture the essence of lambda calculus, and is especially useful for "Intro to Functional Programming" classes.

## Purpose

This allows you parse/lint/highlight Elsa. These basic features help developers integrate powerful and convenient tooling alongside Elsa. Invoke the following commands (they leverage tree-sitter CLI) to witness a demonstration of parsing, syntax highlighting, and lint testing.

Example usage:

```
npm run parse
npm run highlight
npm run test
```

### Tests

Peruse through the `test/` directory to see both singular and plural examples. 

Ensure you have the tree-sitter CLI and run `npm run test`:

```bash
$ npm run test
> tree-sitter-elsa@1.0.0 test
> tree-sitter test

  singular:
    reduction:
      ✓ NORMALIZE AN ABSTRACTION
    definition:
      ✓ DEFINE AN ABSTRACTION
  plural:
    liquid_demo:
      ✓ PARSE INTEGRATED ELSA PROGRAM
    foo:
      ✓ PARSE A HUUUGE ELSA PROGRAM
```
