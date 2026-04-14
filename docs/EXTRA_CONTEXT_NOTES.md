# Extra Context Notes

Additional lightweight context was added after the first upload package:

- `db-metadata/setup_data_tables.txt`
  Full table-name inventory extracted from the `Setup/Data.xml` schema.

- `db-metadata/setup_data_table_fields.csv`
  Table/field/type inventory extracted from the same schema. This is structure only, not row data.

- `db-metadata/payment_related_tables.txt`
  A focused subset of tables whose names suggest payment, POS, customer, terminal, invoice, or value-card relevance.

- `db-metadata/runtime_module_inventory.txt`
  Full inventory of top-level EXE/DLL names from the runtime folder.

- `db-metadata/payment_related_modules.txt`
  Focused module list filtered by payment and hardware keywords.

- `import-format-examples/`
  Header/type examples derived from import sample files without uploading the full sample data files.

- `runtime-notes/`
  Startup and terminal-mapping snippets that help infer runtime flow.

- `ui-layout/`
  Customer display and printer control layout/config examples.

Intentionally still excluded:
- Full `Setup/Data.xml` because it contains actual row data after the schema
- Full sample import catalogs where the content looked operational rather than purely structural
- Connection files with real passwords
