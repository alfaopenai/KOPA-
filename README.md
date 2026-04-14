# POS AI Upload Package

This folder was prepared from a local Windows POS/runtime snapshot for `ProfitAge`.

Purpose:
- Share a lightweight package on a private GitHub repository
- Get AI help about payment-method changes, EFT integrations, and architecture questions
- Avoid uploading binaries, backups, logs, and raw credentials

Important:
- This is not the original source-code repository
- It looks like a runtime/deployment folder, not a full development project
- AI can infer architecture and integration points from these files, but deep code changes will still require the real source code

Included folders:
- `docs/` - product notes, release notes, script notes
- `db-scripts/` - SQL scripts found in setup
- `config-sanitized/` - config files with sensitive values redacted
- `payment-integration/` - payment-related header files
- `db-metadata/` - extracted table/field inventories and runtime module inventories
- `import-format-examples/` - safe import format examples (headers/types only)
- `runtime-notes/` - startup and terminal mapping notes
- `ui-layout/` - customer display and printer control layout/config

Recommended reading order:
- `PROMPT_FOR_AI.md`
- `docs/SYSTEM_OVERVIEW_AND_OMISSIONS.md`
- `docs/EXTRA_CONTEXT_NOTES.md`

Observed version:
- `Version 5.1.0 Patch 131`
- Dated `2026-02-17` in the local `ReadMe.txt`

Suggested repo visibility:
- Private

Recommended next step:
1. Create a new private GitHub repository
2. Upload everything in this folder
3. Start by sharing `PROMPT_FOR_AI.md` with the AI model
