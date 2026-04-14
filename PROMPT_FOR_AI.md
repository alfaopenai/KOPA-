You are reviewing a lightweight package from a Windows POS system called `ProfitAge`.

Context:
- This package was extracted from a runtime/deployment folder, not from the real source-code repository
- The goal is to understand how payment methods and payment integrations work, and what would be needed to extend or replace them
- Focus on architecture, integration points, configuration patterns, payment providers, terminal APIs, and database setup signals

What is included:
- Release notes and local notes
- SQL setup scripts
- Sanitized configuration files
- Wisepay pin-pad header files

What is not included:
- Executables and DLLs
- Database backups and large data files
- Logs
- Raw secrets, passwords, FTP credentials, or license blobs
- Source code projects such as `.sln`, `.csproj`, `.cs`, `.vb`, etc. because they were not present in this folder

Please answer in this order:
1. What can be inferred about the payment architecture from these files
2. Which payment providers or terminal integrations are visible
3. What the safest path is for adding or changing a payment method
4. What exact missing artifacts are needed for real implementation work
5. Which files in this package are the most important to inspect first
