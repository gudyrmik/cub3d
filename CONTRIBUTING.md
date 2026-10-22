# Team workflow

## Roles

- **Team lead (@gudyrmik):** defines tasks, clarifies scope, reviews code, and merges accepted pull requests.
- **Developer (@alnurn):** implements assigned tasks, checks the result, and addresses review feedback.

## From task to merge

1. The team lead opens an Issue with a goal, scope, and verifiable acceptance criteria.
2. The developer creates a branch from the latest `main`. Suggested names: `feat/12_map_parser`, `fix/25_cleanup`, or `chore/7_build_setup`.
3. The developer commits focused changes with descriptive English commit messages. Do not push directly to `main`.
4. The developer opens a Pull Request into `main`, links the Issue (for example, `Closes #12`), and fills in the PR template. Use Draft PRs for work in progress.
5. The team lead reviews the actual diff, requested behavior, errors, resource management, and compliance with the official subject and applicable 42 Norm.
6. If changes are requested, the developer pushes fixes to the same branch and asks for another review.
7. Once accepted and any required checks pass, the team lead merges the PR and deletes the completed branch.

Prefer one coherent task per PR. Separate unrelated refactoring from feature work.

## Definition of done

A task is ready for acceptance when:

- Its Issue acceptance criteria are met.
- The developer explains how the result was verified, including commands and outcomes where applicable.
- Changed code meets the project subject and applicable Norm.
- Resource cleanup, error paths, and relevant edge cases have been considered.
- There are no unresolved blocking review comments.
- The team lead has approved the final changes.

## Public repository

The repository is public. Do not commit credentials, tokens, personal data, or materials that are not permitted to be redistributed. Project requirement documents are shared separately unless their publication is explicitly allowed.

## Language

Use English for repository content: code, comments, documentation, Issues, PRs, branch names, and commit messages. Team conversations can be in any convenient language.
